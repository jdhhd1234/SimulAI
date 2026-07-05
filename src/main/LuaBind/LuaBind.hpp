#pragma once
#include <sol/sol.hpp>

struct WorldState;
struct RootConfig;

class LuaBinding
{
public:
    bool BernoulliLua(double r);
    bool BernoulliLuaRange(double first, double end);

    void BindindToLua(std::string filepath, WorldState &worldstate, sol::state& lua);

    RootConfig& GetRoot(WorldState& WS, size_t index);
};