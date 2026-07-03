cmake_minimum_required(VERSION 3.10.0)
project(SimulAI VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Python COMPONENTS Interpreter Development REQUIRED)

file(GLOB LUA_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/external/lua/*.c
)

list(REMOVE_ITEM LUA_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/external/lua/lua.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/external/lua/luac.c
)
add_library(lua_lib STATIC ${LUA_SRC}
  src/main/State/state.hpp)
target_include_directories(lua_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/external/lua")

add_executable(${PROJECT_NAME} "src/main/SimulAI.cpp" 
    "src/main/SimulAI.hpp"
    ${LUA_SRC}
    "src/main/cppGUI/gui_main.cpp"
    "src/main/cppGUI/gui_main.hpp"
    "src/opengl_setting/glad/src/glad.c"
    "src/main/cppGUI/WorldStateLoader.cpp"
    "src/main/vector/vector_init.cpp"
    "src/main/LuaBind/LuaBind.hpp"
    "src/main/LuaBind/LuaBind.cpp"
    "src/main/State/state.hpp"
    src/main/vector/vector_init.hpp
)

if (MSVC)
    add_compile_options(/utf-8)
endif()

target_compile_options(SimulAI PRIVATE /bigobj)
target_compile_options(${PROJECT_NAME} PRIVATE /Zc:char8_t-)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/external
)

include(FetchContent)
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.4 # 2026년 기준 최신 안정 버전
)
# GLFW 자체 내부 빌드 옵션 조정 (문서/테스트 빌드 제외로 속도 업)
set(GLFW_BUILD_DOCS OFF CACHE INTERNAL "")
set(GLFW_BUILD_TESTS OFF CACHE INTERNAL "")
set(GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG master # Use a specific commit hash or tag for stability
)
FetchContent_MakeAvailable(json)

FetchContent_Declare(
    httplib
    GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
    GIT_TAG        v0.47.0
)
FetchContent_MakeAvailable(httplib)

FetchContent_Declare(
    imgui
    GIT_REPOSITORY https://github.com/ocornut/imgui.git
    GIT_TAG        docking # 가로/세로 도킹 윈도우 기능을 위해 docking 브랜치 추천
)
FetchContent_MakeAvailable(imgui)

FetchContent_Declare(
    pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG        v2.13.6 # 최신 안정 버전 혹은 원하는 태그 지정
)

# 3. pybind11를 프로젝트에 가용하도록 채우기 (Populate)
FetchContent_MakeAvailable(pybind11)

target_sources(${PROJECT_NAME} PRIVATE
    ${imgui_SOURCE_DIR}/imgui.cpp
    ${imgui_SOURCE_DIR}/imgui_demo.cpp
    ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp
    ${imgui_SOURCE_DIR}/imgui_widgets.cpp
    # 백엔드 소스 파일 추가 (GLFW + OpenGL3 예시)
    ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    src/opengl_setting/glad/include              # 본인의 GLAD 헤더 등이 들어있는 폴더
    ${imgui_SOURCE_DIR}       # ImGui 핵심 헤더 경로
    ${imgui_SOURCE_DIR}/backends # ImGui 백엔드 헤더 경로
)

if(WIN32)
    set(OPENGL_LIBRARY opengl32)
else()
    set(OPENGL_LIBRARY GL)
endif()

# 💡 이 부분을 추가해서 OpenSSL 매크로가 켜지는 것을 방지합니다.
set(HTTPLIB_REQUIRE_OPENSSL OFF CACHE INTERNAL "Disable OpenSSL")
set(HTTPLIB_USE_OPENSSL_IF_AVAILABLE OFF CACHE INTERNAL "Disable OpenSSL")

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(${PROJECT_NAME} PRIVATE httplib)
target_link_libraries(${PROJECT_NAME} PRIVATE lua_lib)
target_link_libraries(${PROJECT_NAME} PRIVATE pybind11::embed)

target_link_libraries(${PROJECT_NAME} PRIVATE
    glfw
    ${OPENGL_LIBRARY}
)


set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/src"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_CURRENT_SOURCE_DIR}/src"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

if (TARGET nlohmann_json)
    target_compile_definitions(nlohmann_json INTERFACE JSON_HAS_CPP_20=0)
endif()