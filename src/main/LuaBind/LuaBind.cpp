
#include "src/main/LuaBind/LuaBind.hpp"
#include "src/autoconfig/RootLua.hpp"
#include "src/main/State/state.hpp"
#include <random>

//=====================
//Utility AI API Area
//=====================


//=====================
//Normal API Area
//=====================
bool LuaBinding::BernoulliLua(double percentage)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());

    double safe_percentage = std::clamp(percentage, 0.0, 100.0);

    double r = safe_percentage / 100.0;

    std::bernoulli_distribution bernoulli(r);

    return bernoulli(gen);
}

bool LuaBinding::BernoulliLuaRange(double first, double end)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dis(first, end);

    return dis(gen);
}

RootConfig& LuaBinding::GetRoot(WorldState& WS, size_t index)
{
    return WS.Countries[1].Root.at(index);
}

void LuaBinding::BindindToLua(std::string filepath, WorldState &worldstate, sol::state& lua)
{
    LuaAuto lua_auto;

    lua.open_libraries(
        sol::lib::base,
        sol::lib::package,
        sol::lib::debug,
        sol::lib::string,
        sol::lib::table,
        sol::lib::math,
        sol::lib::os,
        sol::lib::io,
        sol::lib::utf8,
        sol::lib::coroutine
    );

    lua_auto.BindRootConfig(lua);

    //=====================
    //Normal API
    //=====================
    lua.set_function("BernouliLua", &LuaBinding::BernoulliLua, this);
    lua.set_function("BernouliLuaRange", &LuaBinding::BernoulliLuaRange, this);

    lua.set_function(
        "GetRoot", 
    [](WorldState& world, size_t index) -> RootConfig& {
            return world.Countries[1].Root.at(index);
        }
    );

    try
    {
        auto result = lua.script_file(filepath);
    }
    catch (const sol::error &e)
    {
        std::cout << "[Sol Lua Error]: " << e.what() << std::endl;
    }

    sol::protected_function add_main_func = lua["MainRunningEvent"];
    auto main_result = add_main_func(worldstate);

    if (!main_result.valid())
    {
        sol::error err = main_result;
        std::cout << "[Lua Error]: " << err.what() << std::endl;
    }
    else
    {
        std::cout << "[Sol2 Success] Run Success!." << std::endl;
    }
}