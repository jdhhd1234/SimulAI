#pragma once
#include <vector>
#include <iostream>
#include <sol/sol.hpp>

#include "src/autoconfig/Root.hpp"

struct UtilityInfo;
struct WorldState;

namespace UtilityAI
{
    template <typename T>
    T GetValueLua(
        sol::state& lua,
        const std::string& func_name, 
        T& object
    );

    template <typename T>
    constexpr T VecIndexWrapper(WorldState& WS, UtilityID& id);

    double NormalizeMinMax(double minV, double maxV, double value);

    double SigmoidValue(double norm_val);

    double UtilityAICalCul(double sigmoid, double score, size_t count);
}