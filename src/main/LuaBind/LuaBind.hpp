#pragma once
#include <sol/sol.hpp>

struct WorldState;
struct RootConfig;

enum class CurveType
{
    Linear,
    Sigmoid,
    Quadratic
};

struct UtilityParam
{
    double value;
    double min;
    double max;
    double weight;
    CurveType curveType;
};

class AIAPI
{
public:
    void SetUtilityParam(UtilityParam& param,
                     double min,
                     double max,
                     double weight);

    static double Normalize(double value, double min,double max);
    static double ApplyCurve(double normalized,CurveType curve);
    static double ApplyWeight(double value,double weight);
    static double Evaluate(const UtilityParam& param);
};

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