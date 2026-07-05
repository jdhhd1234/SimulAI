#pragma once
#include <vector>
#include <iostream>
#include <sol/sol.hpp>

namespace UtilityAI
{
    template <typename T>
    T GetValueLua(
        sol::state& lua,
        const std::string& func_name, 
        T& object
    );

    double NormalizeMinMax(double minV, double maxV, double value);

    double SigmoidValue(double norm_val);

    void SetImportValue();

    double WeightScore();
}