#include "RootLua.hpp"
#include <sol/sol.hpp>

void LuaAuto::BindRootConfig(sol::state& lua)
{
    BindRootConfig_0(lua);
    BindRootConfig_1(lua);
    BindRootConfig_2(lua);
}