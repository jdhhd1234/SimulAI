import data.external.dataclass_only as datacls
import data.maindata as mdata
import data.filesys.filesystem_manage as fileman
    
from pathlib import Path

import re
import glob
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
def UtilityAIReadCpp():
    pass


 


'''
This Function Role is Only Find
    Utility{name}Config Pattern
    
Flow
    - Read Hpp File
    - Find Utility{name}Config Pattern
        - use Regex
'''
def FindOnlyConfig(root_hpp: Path) -> list[int]:
    pattern = re.compile(r"\bUtility\w+Config\b")
    
    results = []

    if not root_hpp.is_file():
        return results

    content = root_hpp.read_text(encoding="utf-8-sig")

    lines = [
        line.strip()
        for line in content.splitlines()
        if ";" in line
    ]

    for index, line in enumerate(lines):
        match = pattern.search(line)

        if match:
            print(
                f"[{root_hpp.name}] "
                f"{index}번째 멤버에서 발견 : {match.group()}"
            )

            results.append(index)

    return results



'''
This Code Role is
    - For Modder
    - Not Access Vector Index
    
-- Auto Generate result -- 
lua["USA"] = &WS.Countries[0].Root[0].uSA;
USA.states
USA.population

Simple Architect
    - Read Hpp file (UtilitySystem{name}.hpp)
    - Extract Only Value
        - Not include Min Max Sigmoid Norm
        - Min Max Sigmoid Norm Data Only Use C++ CalCulate Engine
    
    - Make This = lua["USA"] = &WS.Countries[0].Root[0].uSA;
'''
def MakeLuaAliasAuto(
    sources: list[datacls.MainConfigSource],
    root_hpp: Path,
    output: Path,
):
    
    find_config = FindOnlyConfig(root_hpp)
    
    cpp_code = []

    cpp_code.append("#pragma once\n")
    cpp_code.append('#include <sol/sol.hpp>\n')
    cpp_code.append('#include "src/main/State/state.hpp"\n\n')
    
    cpp_code.append("class LuaAlias {\n")
    cpp_code.append("public:")
    cpp_code.append("    inline void BindLuaAlias(sol::state& lua, WorldState& WS)\n")
    cpp_code.append("    {\n")

    for src, root_index in zip(sources, find_config):

        struct_name = FindRootStructName(src.include_path)
        member_name = ToMemberName(struct_name)

        label = (
            struct_name
            .removeprefix("Utility")
            .removesuffix("Config")
        )

        cpp_code.append(
            f'        lua["{label}"] = '
            f'&WS.Countries[1].Root[{root_index}].{member_name};\n'
        )

    cpp_code.append("    }\n")
    cpp_code.append("};")

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("".join(cpp_code), encoding="utf-8-sig")