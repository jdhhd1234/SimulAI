#pragma once
#include <sol/sol.hpp>
#include "src/main/State/state.hpp"

class LuaAlias {
public:
    inline void BindLuaAlias(sol::state& lua, WorldState& WS)
    {
        lua["USA"] = &WS.Countries[1].Root[1].uSA;
        lua["Magic"] = &WS.Countries[1].Root[3].magic;
    }
};