import configparser
import CppHeaderParser
import json

from pathlib import Path
from os import PathLike
from typing import Union

import data.external.dataclass_only as datacls

def load_ini(path: Path | PathLike) -> configparser.ConfigParser:
    cfg = configparser.ConfigParser()
    cfg.read(path, encoding="utf-8")
    return cfg

def load_hpp(path: Path | PathLike) -> CppHeaderParser.CppHeader:
    header = CppHeaderParser.CppHeader(path)
    return header

def load_json(path: Path | PathLike) -> Union[dict, list]:
    with open(path, "r", encoding='utf-8') as f:
        return json.load(f)

def write_ini(path: Path, code: str) -> None:
    path.write_text(code, encoding='utf-8')
    

def ReadFileINI(fileList: datacls.ReadFileList) -> datacls.ReadConfig:
    index_config = load_ini(fileList.index_ini)
    action_config = load_ini(fileList.action_ini)
    
    read_config = datacls.ReadConfig(
        index_cfg=index_config,
        action_cfg=action_config
    )
    
    return read_config

def ReadFileHpp(fileList: datacls.ReadFileHppList) -> datacls.ReadHpp:
    index_hpp = load_hpp(fileList.index_hpp)
    action_hpp = load_hpp(fileList.action_hpp)
    
    read_config_hpp = datacls.ReadHpp(
        index_hpp_cfg=index_hpp,
        action_hpp_cfg=action_hpp
    )
    
    return read_config_hpp

def SaveFile(savefilelist: datacls.WriteFileList, cppCode: list[str]) -> None:
    
    write_ini(
        savefilelist.index_ini_out,
        "".join(cppCode)
    )