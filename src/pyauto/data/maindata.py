
import re
import json
import CppHeaderParser

import data.external.dataclass_only as datacls
import data.filesys.filesystem_manage as filesys
import data.external.get_type as typefunc

from pathlib import Path
from os import PathLike

from dataclasses import field
from pydantic.dataclasses import dataclass

def count_all_variables(data):
    count = 0
    allowed_types = ["int", "float", "double", "std::string"]
    
    if isinstance(data, dict):
        if data.get("data_type") in allowed_types:
            count += 1
        for value in data.values():
            count += count_all_variables(value)
    elif isinstance(data, list):
        for item in data:
            count += count_all_variables(item)
    return count

def is_minmax_key(key: str) -> bool:
    return key.endswith("_min") or key.endswith("_max")

def parse_number(value: str) -> float | None:
    first_word = value.strip().split()[0].strip(",") if value.strip() else ""
    first_word = first_word.replace(",", "")
    try:
        return float(first_word)
    except ValueError:
        return None

def ParseDataINI(paths: datacls.ReadFileList, onoff: bool = False):
    
    parsed = []
    action_enums = []
    config_ini = filesys.ReadFileINI(paths)
    
    for section in config_ini.index_cfg.sections():
        
        seen_vars = set()
        section_items = []
        
        items = dict(config_ini.index_cfg.items(section))
        variables_mx: list[datacls.MinMaxField] = []
        
        for key, value in config_ini.index_cfg.items(section):
            
            clean_value = value.split()[0]
            
            cpp_type_func = typefunc.get_cpp_type(clean_value)
            data_key_value = datacls.ConfigField(
                key=key,
                value=value,
                cpp_type=cpp_type_func
            )
            
            #True = This MIN MAX Delete logic
            #False is OFF
            if onoff:
                cpp_var_name = re.sub(r"(_min|_max)$", "", key)
            
                if cpp_var_name in seen_vars:
                    continue
                seen_vars.add(cpp_var_name)
                
            section_items.append(data_key_value)
            
        for key, value in config_ini.index_cfg.items(section):
            if is_minmax_key(key):
                continue
            
            min_raw = items.get(f"{key}_min")
            max_raw = items.get(f"{key}_max")
            value_num = parse_number(value)
            min_num = parse_number(min_raw) if min_raw is not None else None
            max_num = parse_number(max_raw) if max_raw is not None else None
            
            if value_num is None or min_num is None or max_num is None:
                continue
            
            variables_mx.append(
                datacls.MinMaxField(
                    value_mx=value_num,
                    min_value=min_num,
                    max_value=max_num,
                )
            )
            
        parsed.append(
            datacls.ConfigSection(
                section_name=section,
                variables=section_items,
                variables_mx=variables_mx
            )
        )
    
    section_enum = config_ini.action_cfg.sections()
    for i, section_en in enumerate(section_enum):
        action_enums.append(
            datacls.ActionEnum(
                section_name_enum=section_en,
                is_last=(i == len(section_enum) -1)
            )
        )
        
    return datacls.ParserINIResult(
        ini_data=parsed,
        action_enums=action_enums
    )
    
    
def LoadTreeJson(path: Path) -> datacls.JsonTree:
    with open(path, "r", encoding="utf-8") as f:
        tree_data = json.load(f)
        
    structs = []
    
    for struct in tree_data.get("children", []):
        fields = []
        
        for field in struct.get("children", []):
            fields.append(
                datacls.JsonFieldNode(
                    key=field["key"],
                    value=field["value"],
                    cpp_type=field["cpp_type"],
                    syntax=field.get("syntax", "Unknown"),
                    normal_type=field.get("normal_type", "Unknown"),
                    value_child=field.get("value_child", []),
                )
            )
            
        structs.append(
            datacls.JsonStructNode(
                name=struct["name"],
                cpp_type=struct.get("type", "struct"),
                children=fields,
                integrated_score=struct.get("integrated_score"),
            )
        )
    
    return datacls.JsonTree(
        children=structs
    )
    
    
def LoadHpp(path: Path) -> datacls.ReadSingleHpp:
    try:
        hpp_data = CppHeaderParser.CppHeader(str(path))
    except Exception  as e:
        raise RuntimeError(f"HPP 읽기 실패: {path} / {e}")
    
    return datacls.ReadSingleHpp(
        hpp_cfg=hpp_data
    )


def ParsedDataHpp(tree_data_list: datacls.ReadJsonList):
    tree = LoadTreeJson(tree_data_list.tree_json)
    
    struct_definitions = {}
    total_var = 0
    
    for struct in tree.children:
        if struct.cpp_type != "struct":
            continue
        
        struct_definitions[struct.name] = struct.children
        
        for field in struct.children:
            if field.cpp_type in ("int", "float", "double", "std::string"):
                total_var += 1
                
    return struct_definitions, total_var