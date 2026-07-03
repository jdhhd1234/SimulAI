import data.external.dataclass_only as datacls
import data.filesys.filesystem_manage as fileman
import data.maindata as mdata
import CppHeaderParser
import re
from pathlib import Path


def MakeJsonToHpp(path: Path, output: Path, name: datacls.UtilityGenSpec):
    
    data = mdata.LoadTreeJson(path)
    
    cpp_code = []
    cpp_code.append("#pragma once\n")
    cpp_code.append("#include <string>\n")
    cpp_code.append("#include <iostream>\n")
    
    for struct in data.children:
        cpp_code.append(f' //structName {struct.name}{name.prefix}\n')
        cpp_code.append(f'struct {struct.name}{name.prefix} {{\n')
        
        for field in struct.children:
            if field.cpp_type == "std::string":
                cpp_code.append(f'    std::string {field.key} = "{field.value}";\n')
                continue

            cpp_code.append(f'    {field.cpp_type} {field.key} = {field.value};\n')

            if field.value_child:
                norm = field.value_child[0]["norm_result"]
                cpp_code.append(f'    float {field.key}_min = {norm["min"]}f;\n')
                cpp_code.append(f'    float {field.key}_max = {norm["max"]}f;\n')
                cpp_code.append(f'    float {field.key}_norm = {norm["norm"]}f;\n')
                cpp_code.append(f'    float {field.key}_sigmoid = {norm["sigmoid"]}f;\n')
                
                
        cpp_code.append('};\n')
        
    cpp_code.append(f"struct {name.struct_name} {{\n")
    for struct in data.children:
        cpp_code.append(f"    {struct.name}{name.prefix} {struct.name.lower()}; \n")
    cpp_code.append("};\n\n")
                
    
    with output.open("w", encoding="utf-8") as f:
        f.writelines(cpp_code)
    
    
def FindRootStructName(hpp_path: Path) -> str:
    hpp = CppHeaderParser.CppHeader(str(hpp_path))

    candidates = [
        name for name in hpp.classes.keys()
        if name.startswith("Utility") and name.endswith("Config")
    ]

    if not candidates:
        raise ValueError(f"Not Found Main struct: {hpp_path}")

    if len(candidates) > 1:
        raise ValueError(f"Main struc a lot: {hpp_path} / {candidates}")

    return candidates[0]

def ToMemberName(struct_name: str) -> str:
    name = struct_name.removesuffix("Config")
    name = name.removeprefix("Utility")
    return name[:1].lower() + name[1:]
    
def ExtractAllStructMembers(hpp_path: Path) -> dict[str, list[tuple[str, str]]]:
    text = hpp_path.read_text(encoding="utf-8")

    struct_members = {}

    struct_pattern = r"struct\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{(.*?)\};"

    for struct_name, body in re.findall(struct_pattern, text, re.DOTALL):
        members = []

        for line in body.splitlines():
            line = line.strip()

            if not line or line.startswith("//"):
                continue

            line = line.split("//")[0].strip()
            line = line.rstrip(";").strip()
            line = line.split("=")[0].strip()

            parts = line.split()

            if len(parts) < 2:
                continue

            member_type = " ".join(parts[:-1])
            member_name = parts[-1]

            members.append((member_type, member_name))

        struct_members[struct_name] = members

    return struct_members
    
    
def MakeInteIncludeAuto(
    sources: list[datacls.MainConfigSource],
    root_output: Path,
    bind_output: Path,
    root_struct_name: str = "RootConfig",
):
    root_members = []
    struct_members = {}

    cpp_code = ["#pragma once", ""]

    for src in sources:
        cpp_code.append(f'#include "{src.include_path.as_posix()}"')

        # 핵심: include 파일 안의 모든 struct 수집
        struct_members.update(ExtractAllStructMembers(src.include_path))

    cpp_code.append('#include <vector>')
    cpp_code.append('#include <cstddef>')
    cpp_code.append("")
    cpp_code.append(f"struct {root_struct_name} {{")

    for src in sources:
        struct_name = FindRootStructName(src.include_path)
        member_name = ToMemberName(struct_name)

        root_members.append((struct_name, member_name))
        cpp_code.append(f"    {struct_name} {member_name};")

    cpp_code.append("};")
    cpp_code.append("")
    cpp_code.append(f"static constexpr size_t member_count = {len(root_members)};")

    root_output.write_text("\n".join(cpp_code), encoding="utf-8")

    bind_hpp_code = [
        "#pragma once",
        "namespace sol { class state; }",
        "",
        "class LuaAuto {",
        "public:",
        "    void BindRootConfig(sol::state& lua);",
        "};",
    ]
    
    bind_cpp_code = [
        '#include "RootLua.hpp"',  # 실제 hpp 이름에 맞게 수정
        '#include <sol/sol.hpp>',
        f'#include "{root_output.as_posix()}"',
        "",
        "void LuaAuto::BindRootConfig(sol::state& lua)",
        "{",
    ]

    # 하위 struct 전부 바인딩
    for struct_name, members in struct_members.items():
        if struct_name == root_struct_name:
            continue

        if not members:
            continue

        bind_cpp_code.append(f'    lua.new_usertype<{struct_name}>("{struct_name}",')

        for i, (member_type, member_name) in enumerate(members):
            comma = "," if i < len(members) - 1 else ""
            bind_cpp_code.append(
                f'        "{member_name}", &{struct_name}::{member_name}{comma}'
            )

        bind_cpp_code.append("    );")
        bind_cpp_code.append("")

    bind_cpp_code.append(f'    lua.new_usertype<{root_struct_name}>("{root_struct_name}",')

    for i, (_, member_name) in enumerate(root_members):
        comma = "," if i < len(root_members) - 1 else ""
        bind_cpp_code.append(
            f'        "{member_name}", &{root_struct_name}::{member_name}{comma}'
        )
        
    bind_cpp_code.append("    );")
    bind_cpp_code.append("}")

    bind_output.write_text("\n".join(bind_hpp_code), encoding="utf-8")

    bind_cpp_output = bind_output.with_suffix(".cpp")
    bind_cpp_output.write_text("\n".join(bind_cpp_code), encoding="utf-8")
    
    
    
def ImGuiWidgetByType(cpp_type: str, label: str, access_path: str) -> str:
    if cpp_type in ("float", "double"):
        return f'                ImGui::Text("{label}: %.4f", {access_path});\n'
    if cpp_type in ("int", "int32_t", "uint32_t", "long", "long long", "size_t"):
        return f'                ImGui::Text("{label}: %d", {access_path});\n'
    if cpp_type == "bool":
        return f'                ImGui::Text("{label}: %s", {access_path} ? "true" : "false");\n'
    if cpp_type == "std::string":
        return f'                ImGui::Text("{label}: %s", {access_path}.c_str());\n'
    return f'                ImGui::Text("{label}: unsupported type {cpp_type}");\n'
    
    
def MakeRootImGuiAuto(
    sources: list[datacls.MainConfigSource],
    output: Path,
    root_struct_name: str = "RootConfig",
    class_name: str = "RootConfigImGui",
):
    cpp_code = []

    cpp_code.append("#pragma once\n")
    cpp_code.append('#include <imgui.h>\n')
    cpp_code.append('#include "src/autoconfig/Root.hpp"\n\n')

    cpp_code.append(f"class {class_name} {{\n")
    cpp_code.append("public:\n")
    cpp_code.append(f"    void Draw({root_struct_name}& root)\n")
    cpp_code.append("    {\n")

    for src in sources:
        hpp = CppHeaderParser.CppHeader(str(src.include_path))

        struct_name = FindRootStructName(src.include_path)
        member_name = ToMemberName(struct_name)

        label = struct_name.removeprefix("Utility").removesuffix("Config")

        cpp_code.append(f'        if (ImGui::TreeNode("{label}"))\n')
        cpp_code.append("        {\n")

        root_struct = hpp.classes.get(struct_name)
        if root_struct is None:
            cpp_code.append("            ImGui::Text(\"Root struct not found\");\n")
            cpp_code.append("            ImGui::TreePop();\n")
            cpp_code.append("        }\n")
            continue

        # UtilityUSAConfig 안의 하위 struct들 순회
        for child in root_struct["properties"]["public"]:
            child_type = child["type"]
            child_name = child["name"]

            child_struct = hpp.classes.get(child_type)
            if child_struct is None:
                continue

            cpp_code.append(f'            if (ImGui::TreeNode("{child_name}"))\n')
            cpp_code.append("            {\n")

            # 하위 struct 안의 실제 필드 출력
            for field in child_struct["properties"]["public"]:
                field_type = field["type"]
                field_name = field["name"]

                access_path = f"root.{member_name}.{child_name}.{field_name}"
                label_name = f"{child_name}_{field_name}"

                cpp_code.append(
                    ImGuiWidgetByType(
                        cpp_type=field_type,
                        label=label_name,
                        access_path=access_path,
                    )
                )

            cpp_code.append("                ImGui::TreePop();\n")
            cpp_code.append("            }\n")

        cpp_code.append("            ImGui::TreePop();\n")
        cpp_code.append("        }\n\n")

    cpp_code.append("    }\n")
    cpp_code.append("};\n")


    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("".join(cpp_code), encoding="utf-8")
    
    
def AutoSetterClass(path: Path, output: Path, name: datacls.UtilityGenSpec):
    
    data = mdata.LoadTreeJson(path)
    
    cpp_code = []
    cpp_code.append("#pragma once\n")
    cpp_code.append("#include <string>\n")
    cpp_code.append("#include <iostream>\n")
        
    cpp_code.append(f"class {name.struct_name}Cls {{\n")
    cpp_code.append('public:\n')
    for struct in data.children:
        
        for field in struct.children:
            cpp_code.append(f'    void {field.key.title()}();\n')
        #cpp_code.append(f"    void {struct.name}{name.prefix}(); \n")
    cpp_code.append("};\n\n")
                
    
    with output.open("w", encoding="utf-8") as f:
        f.writelines(cpp_code)