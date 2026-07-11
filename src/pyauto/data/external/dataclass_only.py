from dataclasses import field
from pydantic import ConfigDict
from pydantic.dataclasses import dataclass
from typing import Any, TypeAlias
from pathlib import Path
from os import PathLike

import configparser
import CppHeaderParser

#======================================
#DATA
#======================================
    
@dataclass(frozen=True)
class ConfigField:
    key: str
    value: str
    cpp_type: str
    
@dataclass
class MinMaxField:
    value_mx: float
    min_value: float
    max_value: float
    
@dataclass
class ConfigSection:
    section_name: str
    variables: list[ConfigField] = field(default_factory=list)
    variables_mx: list[MinMaxField] = field(default_factory=list)
    
@dataclass
class SectionMinMax:
    sigmoid: list[float] = field(default_factory=list)
    minmax: list[float] = field(default_factory=list)
    
@dataclass
class ActionEnum:
    section_name_enum: str
    is_last: bool
    
@dataclass
class ParserINIResult:
    ini_data: list[ConfigSection]
    action_enums: list[ActionEnum]
    
    
@dataclass
class JsonFieldNode:
    key: str
    value: str
    cpp_type: str
    syntax: str
    normal_type: str
    value_child: list[dict]


@dataclass
class JsonStructNode:
    name: str
    cpp_type: str
    children: list[JsonFieldNode]
    integrated_score: dict


@dataclass
class JsonTree:
    children: list[JsonStructNode]
    
#======================================
#Hpp Struct
#======================================
@dataclass
class HppStruct:
    struct_name: str
    child_type: str
    child_value: str
    
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class ReadSingleHpp:
    hpp_cfg: CppHeaderParser.CppHeader


#======================================
#Utility
#======================================
@dataclass
class UtilityGenSpec:
    struct_name: str
    vector_name: str
    count_name: str
    
    prefix: str

#======================================
#FileSystem
#======================================

JsonData: TypeAlias = dict[str, "JsonData"] | list["JsonData"] | str | int | float | bool | None
JsonDict: TypeAlias = dict[str, JsonData]

@dataclass
class ReadFileList:
    index_ini: Path
    action_ini: Path
    
@dataclass
class ReadFileHppList:
    index_hpp: Path
    action_hpp: Path
    
@dataclass
class ReadJsonList:
    tree_json: Path
    
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class ReadHpp:
    index_hpp_cfg: CppHeaderParser.CppHeader
    action_hpp_cfg: CppHeaderParser.CppHeader
    
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class ReadConfig:
    index_cfg: configparser.ConfigParser
    action_cfg: configparser.ConfigParser
    
@dataclass
class WriteFileList:
    index_ini_out: Path
    action_ini_out: Path
    
    outjson: Path
    
@dataclass(frozen=True)
class MainConfigSource:
    include_path: Path
    
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class MainConfigSourceHppLst:
    include_pth_list_hpp: CppHeaderParser.CppHeader
    
@dataclass
class ParserJob:
    name: str
    read_ini: ReadFileList
    write_files: WriteFileList
    utility_out: Path
    utility_spec: UtilityGenSpec

    @property
    def tree_json(self) -> Path:
        return self.write_files.outjson
    
#======================================
#action to lua
#======================================
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class ReadActionINI:
    action_path: Path
    
@dataclass(config=ConfigDict(arbitrary_types_allowed=True))
class ReadActionConfig:
    action_path_cfg: configparser.ConfigParser