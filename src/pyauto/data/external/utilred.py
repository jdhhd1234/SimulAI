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


def UtilityAIRead(sources: list[datacls.MainConfigSource],):
    
    cpp_code = []
    
    cpp_code.append('#pragma once')
    cpp_code.append('#include <variant>')
       
    for src in sources:
        enum_name = FindEnumClassNames(src.include_path)
        