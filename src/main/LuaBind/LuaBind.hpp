#pragma once
#include <sol/sol.hpp>

struct WorldState;
struct RootConfig;

class LuaBinding
{
public:
    bool BernouliLua(double r);
    bool BernouliLuaRange(double first, double end);

    void BindindToLua(std::string filepath, WorldState &worldstate, sol::state& lua);

    //==============================
    //C++ Utility API
    //==============================



    RootConfig& GetRoot(WorldState& WS, size_t index);
};