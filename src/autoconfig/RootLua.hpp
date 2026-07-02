#pragma once
namespace sol { class state; }

class LuaAuto {
public:
    void BindRootConfig(sol::state& lua);
};