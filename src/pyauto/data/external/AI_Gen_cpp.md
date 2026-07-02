# cppCodeGen.py

## 목적및 기능
- index.ini파일을 1차적으로 struct로 바꾸기 = AutoIndex.hpp
- action.ini파일을 2차적으로 enum class로 바꾸기 = AutoAction.hpp
- AutoIndex.hpp를 바탕으로 VectorInit.hpp를 만들기
    `VectorInit.hpp예제코드 참고만!: 
    
    
    `


### 사용가능 dataclass
- dataclass 목록
    ```from dataclasses import field
    from pydantic.dataclasses import dataclass
    from pydantic import ConfigDict

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
        min_value: str
        max_value: str
        
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
        

    #======================================
    #FileSystem
    #======================================
    @dataclass
    class ReadFileList:
        index_ini: Path
        action_ini: Path
        
    @dataclass
    class ReadFileHppList:
        index_hpp: Path
        action_hpp: Path
        
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
        
        outjson: Path`

- 단 **이 코드를 절떄로 파일을 만들지 말고 오직 호출만 해라**
    ```예시 import data.maindata as maindata
         import data.external.dataclass_only as datacls
         import data.filesys.filesystem_manage as fileman
    ```

- 이런식으로만 호출을 해라

### 