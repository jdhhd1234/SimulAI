#pragma once
#include <vector>
#include <iostream>
#include <sol/sol.hpp>

struct WorldState;
struct RootConfig;

namespace UtilityAI
{
    template <typename T>
    T GetValueLua(
        sol::state& lua,
        const std::string& func_name, 
        T& object
    );

    template <typename T>
    void ReadWorldState(RootConfig& rootConfig, T& value);

    double NormalizeMinMax(double minV, double maxV, double value);

    double SigmoidValue(double norm_val);

    double UtilityAICalCul(double sigmoid, double score, size_t count);
}