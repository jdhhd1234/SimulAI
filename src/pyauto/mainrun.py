import data.external.cppCodeGen as cppGen
import data.external.dataclass_only as datacls
import data.maindata as maindata

import data.external.utily as cppGenUtily

from pathlib import Path
from dataclasses import dataclass

jobs = [
    datacls.ParserJob(
        name="USA",
        read_ini=datacls.ReadFileList(
            index_ini=Path("src/ini_fld/DebugTestINI/index.ini"),
            action_ini=Path("src/ini_fld/DebugTestINI/action.ini"),
        ),
        write_files=datacls.WriteFileList(
            index_ini_out=Path("src/autoconfig/IndexConfig.hpp"),
            action_ini_out=Path("src/autoconfig/ActionConfig.hpp"),
            outjson=Path("src/autoconfig/Tree.json"),
        ),
        utility_out=Path("src/autoconfig/UtilitySystem.hpp"),
        
        utility_spec=datacls.UtilityGenSpec(
            struct_name="UtilityUSAConfig",
            vector_name="utilityUSAcfg",
            count_name="USACount",
            prefix="USA"
        ),
    ),

    datacls.ParserJob(
        name="Magic",
        read_ini=datacls.ReadFileList(
            index_ini=Path("src/ini_fld/DebugTestINI/magic/magic.ini"),
            action_ini=Path("src/ini_fld/DebugTestINI/magic/magicAct.ini"),
        ),
        write_files=datacls.WriteFileList(
            index_ini_out=Path("src/autoconfig/IndexMagicConfig.hpp"),
            action_ini_out=Path("src/autoconfig/ActionMagicConfig.hpp"),
            outjson=Path("src/autoconfig/MagicTree.json"),
        ),
        
        utility_out=Path("src/autoconfig/UtilitySystemMagic.hpp"),
        
        utility_spec=datacls.UtilityGenSpec(
            struct_name="UtilityMagicConfig",
            vector_name="utilitymagiccfg",
            count_name="magicCount",
            prefix="Magic"
        ),
    ),
]

root_piece = [
    datacls.MainConfigSource(include_path=Path("src/autoconfig/UtilitySystem.hpp")),
    datacls.MainConfigSource(include_path=Path("src/autoconfig/UtilitySystemMagic.hpp")),
]

root_pth = Path("src/autoconfig/Root.hpp")
    
def RunParserJob(job: datacls.ParserJob):
    print(f"[{job.name}] Start")

    cppGen.CppCodeGenHpp(job.read_ini, job.write_files)
    print(f"[{job.name}] CppCode Generate!")
    
    #===================
    #Lua Zone
    #===================
    cppGen.ActionAutoLua(
        action_ini=Path("src/ini_fld/DebugTestINI/action.ini"),
        output=Path("src/autoconfig/ActionUSA.lua")
    )
    cppGen.ActionAutoLua(
        action_ini=Path("src/ini_fld/DebugTestINI/magic/magicAct.ini"),
        output=Path("src/autoconfig/ActionMagic.lua")
    )
    print("LuaAuto Generate!")

    parsed = maindata.ParseDataINI(job.read_ini)
    cppGen.TreeJson(parsed, job.tree_json)
    print(f"[{job.name}] Tree Json Generate!")

    cppGenUtily.MakeJsonToHpp(job.tree_json, job.utility_out, job.utility_spec)
    
    print(f"[{job.name}] Json To Hpp Generate!")

    print(f"[{job.name}] Done")

print("Root Hpp Generate!")

for job in jobs:
    RunParserJob(job)
    
cppGenUtily.MakeInteIncludeAuto(
    sources=root_piece,
    root_output=Path("src/autoconfig/Root.hpp"),
    bind_output=Path("src/autoconfig/RootLua.hpp")
)
    
print("MakeInteIncludeAuto Complete")

cppGenUtily.MakeRootImGuiAuto(
    sources=root_piece,
    output=Path("src/autoconfig/RootImGuiAuto.hpp")
)

print("MakeRootImGuiAuto Complete")

#cppGen.INICustomParser(Path("src/ini_fld/DebugTestINI/action.ini"), dat)