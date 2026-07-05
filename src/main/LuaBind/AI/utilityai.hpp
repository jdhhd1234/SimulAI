#pragma once
#include <vector>
#include <iostream>
#include <sol/sol.hpp>

namespace UtilityAI
{
    template <typename T>
    T GetValueLua(
        const std::string& func_name, 
        T& object
    );

    double NormalizeMinMax();
    double SigmoidValue();
    void SetImportValue();
    double WeightScore();
}