import data.external.dataclass_only as datacls
import data.maindata as mdata
import data.filesys.filesystem_manage as fileman
    
from pathlib import Path

import re

#Not Running This is Test File

def read_clean_hpp_text(hpp_path: Path) -> str:
    text = hpp_path.read_text(encoding="utf-8-sig", errors="replace")
    text = text.replace("\ufeff", "")
    text = text.replace("\x00", "")
    return text


def FindEnumClassNames(hpp_path: Path) -> str:
    text = read_clean_hpp_text(hpp_path)

    candidates = re.findall(
        r'\benum\s+class\s+([A-Za-z_]\w*)',
        text,
    )

    if not candidates:
        raise ValueError(f"Not Found Enum Class: {hpp_path}")

    if len(candidates) > 1:
        raise ValueError(f"Enum Class a lot: {hpp_path} / {candidates}")

    return candidates[0]


def FindRootStructName(hpp_path: Path) -> str:
    text = read_clean_hpp_text(hpp_path)

    candidates = re.findall(
        r'\bstruct\s+(Utility[A-Za-z_]\w*Config)\b',
        text,
    )

    candidates = list(dict.fromkeys(candidates))

    if not candidates:
        raise ValueError(f"Not Found Main struct: {hpp_path}")

    if len(candidates) > 1:
        raise ValueError(f"Main struct a lot: {hpp_path} / {candidates}")

    return candidates[0]


def ToMemberName(struct_name: str) -> str:
    name = struct_name.removesuffix("Config")
    name = name.removeprefix("Utility")
    return name[:1].lower() + name[1:]


def UtilityAIReadHpp(sources: list[datacls.MainConfigSource], output: Path):
    
    cpp_code = []
    
    cpp_code.append('#pragma once')
    cpp_code.append('')
    
    cpp_code.append('struct UtilityID;')
    cpp_code.append('struct WorldState;')
    
    root_enum_members = []
        
    for src in sources:
        if not src.include_path.exists():
            raise FileNotFoundError(f"Not Found include file: {src.include_path}")

        enum_name = FindEnumClassNames(src.include_path)
        enum_member_name = ToMemberName(enum_name)

        root_enum_members.append((enum_name, enum_member_name))

        cpp_code.append(f'#include "{src.include_path.as_posix()}"')

    cpp_code.append('')
    cpp_code.append(f'namespace UtiliRead {{')
    cpp_code.append('    template <typename T>')
    cpp_code.append('    constexpr T VecIndexWrapper(WorldState& WS, UtilityID& id);')
    cpp_code.append('}')

    output.write_text("\n".join(cpp_code), encoding="utf-8-sig")
    

'''
**UtilityAIReadCpp**

This Function is Make Cpp file

Make List
    - switch-case
    - vector index

Important role
    - Easy value index for lua
    - Wrapper
'''
def UtilityAIReadCpp(sources: list[datacls.MainConfigSource], output: Path):
    
    cpp_code = []
    cpp_code.append('#include "src/autoconfig/TestUtil.hpp" ')
    cpp_code.append('#include "src/autoconfig/Root.hpp" ')
    cpp_code.append('')
    
    root_enum_members = []
        
    for src in sources:
        if not src.include_path.exists():
            raise FileNotFoundError(f"Not Found include file: {src.include_path}")

        enum_name = FindEnumClassNames(src.include_path)
        enum_member_name = ToMemberName(enum_name)

        root_enum_members.append((enum_name, enum_member_name))

        cpp_code.append(f'#include "{src.include_path.as_posix()}"')
        
    cpp_code.append('template <typename T>')
    cpp_code.append('constexpr T UtiliRead::VecIndexWrapper(WorldState& WS, UtilityID& id) {')
    
    cpp_code.append('    switch (id) {')
    
    for src in sources:
        struct_name = FindRootStructName(src.include_path)
        member_name = ToMemberName(struct_name)
        
        enum_name = FindEnumClassNames(src.include_path)
        enum_member_name = ToMemberName(enum_name)
        
        '''print(f"[STRUCT_NAME]: {struct_name}")
        print(f"[MEMBER_NAME]: {member_name}")
        print(f"[ENUM_NAME]: {enum_name}")
        print(f"[ENUM_MEMBER_NAME]: {enum_member_name}")

        cpp_code.append(f'    case UtilityID::{enum_member_name}:')
        cpp_code.append(f'        return WS.Countries[1]. ;')
        cpp_code.append('')
        
        cpp_code.append(f'    ')'''
        
    cpp_code.append('    }')
        

    output.write_text("\n".join(cpp_code), encoding="utf-8-sig")