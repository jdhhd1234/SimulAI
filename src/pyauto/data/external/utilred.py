import dataclass_only as datacls
import maindata as mdata
import filesys.filesystem_manage as fileman
    
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


def UtilityAIRead(sources: list[datacls.MainConfigSource],):
    
    cpp_code = []
    
    cpp_code.append('#pragma once')
    cpp_code.append('#include <variant>')
    cpp_code.append('#include <cstddef>')
    cpp_code.append('')

    root_members = []
    root_enum_members = []
        
    for src in sources:
        if not src.include_path.exists():
            raise FileNotFoundError(f"Not Found include file: {src.include_path}")

        enum_name = FindEnumClassNames(src.include_path)
        struct_name = FindRootStructName(src.include_path)
        member_name = ToMemberName(struct_name)
        enum_member_name = ToMemberName(enum_name)

        root_members.append((struct_name, member_name))
        root_enum_members.append((enum_name, enum_member_name))

        cpp_code.append(f'#include "{src.include_path.as_posix()}"')

    cpp_code.append('')
    cpp_code.append('struct RootConfig {')

    for enum_name, enum_member_name in root_enum_members:
        cpp_code.append(f'    {enum_name} {enum_member_name.lower()};')

    for struct_name, member_name in root_members:
        cpp_code.append(f'    {struct_name} {member_name};')

    cpp_code.append('};')
    cpp_code.append('')
    cpp_code.append(
        f'static constexpr size_t struct_member_count = {len(root_members) + len(root_enum_members)};'
    )

    return "\n".join(cpp_code)