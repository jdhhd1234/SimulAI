
import data.external.dataclass_only as datacls
import data.filesys.filesystem_manage as fileman
import data.filesys.filesystem_manage as filesys
import data.maindata as mdata

from pathlib import Path
from collections import defaultdict

import json
import re
import math

import configparser

def ReadINICustomSyntax(struct_name):
    target_low_best = "LowBest"
    target_high_best = "HighBest"
    
    if re.search(target_high_best, struct_name, re.IGNORECASE):
        return "HighBest"
    elif re.search(target_low_best, struct_name, re.IGNORECASE):
        return "LowBest"
    else:
        return "Unknown"
    
def CheckType(type):
    if type == "std::string":
        return "variable"
    elif type == "double":
        return "variable"
    elif type == "int":
        return "variable"
    elif type == "float":
        return "variable"
    elif type == "bool":
        return "variable"
    else:
        return "Unknown"
    
def remove_lines_with_keywords(lines, keywords: list[str]):
    """
    lines: List
    keywords: Remove List
    """

    return [
        lines
        for line in lines
        if not any(keyword in line for keyword in keywords)
    ]
    
def MinMaxNorm(value: float, min_value: float, max_value: float) -> dict[str, float]:
    if max_value == min_value:
        norm = 0.0
    else:
        norm = (value - min_value) / (max_value - min_value)

    sigmoid = 1.0 / (1.0 + math.exp(-norm))
    return {
        "value": round(value, 4),
        "min": round(min_value, 4),
        "max": round(max_value, 4),
        "norm": round(norm, 4),
        "sigmoid": round(sigmoid, 4),
    }
    
def avg(values: list[float]) -> float:
    return round(sum(values) / len(values), 4) if values else 0.0

def get_norm_result(field: dict) -> dict | None:
    value_child = field.get("value_child", [])
    if not value_child:
        return None

    return value_child[0].get("norm_result")
    
    
def CountJsonVariables(parsed_json: datacls.JsonTree) -> int:
    count = 0

    for struct in parsed_json.children:
        for field in struct.children:
            if field.normal_type == "variable":
                count += 1

    return count


def CountJsonValueChild(parsed_json: datacls.JsonTree) -> int:
    count = 0

    for struct in parsed_json.children:
        for field in struct.children:
            if not field.value_child:
                continue
            
            if "min" in field.value_child[0]["norm_result"]:
                count += 1
            if "max" in field.value_child[0]["norm_result"]:
                count += 1
                
    return count


def format_value(value, target_cpp_type):
    if target_cpp_type in ("int", "int32", "int64", "long", "short"):
        return str(int(value))
    elif target_cpp_type == "float":
        s = str(float(value))
        return f"{s}f"
    elif target_cpp_type == "double":
        return f"{float(value)}"
    else:
        return str(value)



def CppCodeGenHpp(paths: datacls.ReadFileList, writeini: datacls.WriteFileList):
    
    cppCode = []
    
    if paths.index_ini.suffix == ".ini" and paths.action_ini.suffix == ".ini":
        
        parsed_data = mdata.ParseDataINI(paths, False)
        
        cppCode.append("#pragma once\n")
        cppCode.append("#include <string>\n")
        cppCode.append("#include <iostream>\n")
        
        for section in parsed_data.ini_data:
            
            cppCode.append(f'struct {section.section_name}Config {{\n')
            
            for field in section.variables:
                if field.cpp_type == "std::string":
                    cppCode.append(f'    {field.cpp_type} {field.key} = "";\n ')
                else:
                    cppCode.append(f'    {field.cpp_type} {field.key} = 0;\n ')
            
            cppCode.append("};\n\n")
            
        cppCode.append("struct MainConfig {\n")
        for section in parsed_data.ini_data:
            cppCode.append(f"    {section.section_name}Config {section.section_name.lower()};\n")
        cppCode.append("};\n\n")
        
        cppCode.append("// --- [ 2. Action enum class ] ---\n")
        cppCode.append("enum class ActionType\n{\n")

        for section_enum_loop in parsed_data.action_enums:
            if section_enum_loop.is_last:
                cppCode.append(f"    {section_enum_loop.section_name_enum}\n")
            else:
                cppCode.append(f"    {section_enum_loop.section_name_enum},\n")
                
        cppCode.append("};\n")
        
        cppCode.append("struct MainConfigEnumClass {\n")
        cppCode.append("   ActionType AT;")
        cppCode.append("};\n")
        
    fileman.SaveFile(writeini, cppCode)
    
    
def ToLuaName(name: str) -> str:
    name = re.sub(r"[^a-zA-Z0-9_]", "_", name)
    return name.strip("_")


def ActionAutoLua(action_ini: Path, output: Path):
    config = configparser.ConfigParser()
    config.read(action_ini, encoding="utf-8")

    lua_code = []

    lua_code.append("-- Auto Generated Action Lua\n")
    lua_code.append("-- Do Not Edit Manually\n\n")
    lua_code.append("local Actions = {}\n\n")

    for section in config.sections():
        action_name = ToLuaName(section)

        lua_code.append(f"Actions.{action_name} = {{\n")

        # INI 값들을 Lua 필드로 저장
        for key, value in config.items(section):
            key_name = ToLuaName(key)

            # 숫자면 숫자 그대로, 아니면 문자열
            if re.fullmatch(r"-?\d+(\.\d+)?", value):
                lua_code.append(f"    {key_name} = {value},\n")
            else:
                lua_code.append(f'    {key_name} = "{value}",\n')

        lua_code.append("\n")
        lua_code.append("    Condition = function(world, country)\n")
        lua_code.append("        return true\n")
        lua_code.append("    end,\n\n")

        lua_code.append("    Utility = function(world, country)\n")
        lua_code.append("        return 0.0\n")
        lua_code.append("    end,\n\n")

        lua_code.append("    Execute = function(world, country)\n")
        lua_code.append("    end,\n\n")

        lua_code.append("    After = function(world, country)\n")
        lua_code.append("    end,\n")

        lua_code.append("}\n\n")

    lua_code.append("return Actions\n")

    output.parent.mkdir(parents=True, exist_ok=True)

    with output.open("w", encoding="utf-8") as f:
        f.writelines(lua_code)
        

def InteGrationIndex(struct_node_all: dict) -> dict:
    
    high_norms = []
    high_sigmoids = []

    low_norms = []
    low_sigmoids = []

    for field in struct_node_all.get("children", []):
        syntax = field.get("syntax")
        norm_result = get_norm_result(field)

        if norm_result is None:
            continue

        norm = norm_result.get("norm")
        sigmoid = norm_result.get("sigmoid")

        if norm is None:
            continue

        if syntax == "HighBest":
            high_norms.append(float(norm))
            if sigmoid is not None:
                high_sigmoids.append(float(sigmoid))

        elif syntax == "LowBest":
            low_norms.append(float(norm))
            if sigmoid is not None:
                low_sigmoids.append(float(sigmoid))

    high_score = avg(high_norms)
    low_score = avg([1.0 - x for x in low_norms])

    total_parts = []
    if high_norms:
        total_parts.append(high_score)
    if low_norms:
        total_parts.append(low_score)

    struct_node_all["integrated_score"] = {
        "HighBest": {
            "count": len(high_norms),
            "avg_norm": high_score,
            "avg_sigmoid": avg(high_sigmoids)
        },
        "LowBest": {
            "count": len(low_norms),
            "avg_norm": avg(low_norms),
            "inverted_avg_norm": low_score,
            "avg_sigmoid": avg(low_sigmoids)
        },
        "total_score": avg(total_parts)
    }

    return struct_node_all

        
def add_integrated_score_to_tree(tree_data: dict) -> dict:
    for node in tree_data.get("children", []):
        if node.get("type") == "struct":
            InteGrationIndex(node)

    return tree_data
        
        
def TreeJson(parsed: datacls.ParserINIResult, output: Path):
    
    tree_data = {
        "name": "MainConfig",
        "type": "root",
        "children": []
    }
    
    for section in parsed.ini_data:
        
        struct_node = {
            "name": section.section_name,
            "type": "struct",
            "children": []
        }
        
        min_max_map = {}
        
        for field in section.variables:
            if field.key.endswith("_min"):
                base_key = field.key[:-len("_min")]
                min_max_map.setdefault(base_key, {})["min"] = field.value
            elif field.key.endswith("_max"):
                base_key = field.key[:-len("_max")]
                min_max_map.setdefault(base_key, {})["max"] = field.value
        
        for field in section.variables:
            
            if field.key.endswith(("_min", "_max")):
                continue
    
            children_val = []
            
            if field.key in min_max_map:
                
                bounds = min_max_map[field.key]
                bounds_min = bounds.get("min")
                bounds_max = bounds.get("max")
                
                if bounds_min is not None and bounds_max is not None:
                    children_val.append({
                        "norm_result": MinMaxNorm(
                        float(field.value),
                        float(bounds_min),
                        float(bounds_max)
                    )
                })
        
            field_node = {
                "key": field.key,
                "value": field.value,
                "cpp_type": field.cpp_type,
                "syntax": ReadINICustomSyntax(struct_name=section.section_name),
                "normal_type": CheckType(field.cpp_type),
                "value_child": children_val
            }
            
            struct_node["children"].append(field_node)
            
        tree_data["children"].append(struct_node)
        
    tree_data = add_integrated_score_to_tree(tree_data)
        
    with output.open("w", encoding="utf-8") as f:
        json.dump(tree_data, f, indent=4)