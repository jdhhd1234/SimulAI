#include "utilityai.hpp"
#include "src/autoconfig/Root.hpp"
#include "src/autoconfig/RootLua.hpp"
#include "src/main/State/state.hpp"

template <typename T>
T UtilityAI::GetValueLua(
    sol::state& lua,
    const std::string& func_name, 
    T& object
)
{
    sol::protected_function func = lua[func_name];

    if (!func.valid())
        return;

    func(object);
}

template <typename T>
void UtilityAI::ReadWorldState(RootConfig& rootConfig, T& value)
{
    for (size_t i = 0; i < rootConfig.member_count; ++i)
    {
        
    }
}

double UtilityAI::NormalizeMinMax(double minV, double maxV, double value)
{
    return (value - minV) / (maxV - minV);
}

double UtilityAI::SigmoidValue(double norm_val)
{
    return 1.0 / (1.0 + std::exp(-norm_val));
}

double UtilityAI::UtilityAICalCul(double sigmoid, double score, size_t count)
{
    for (size_t i = 0; i < count; ++i)
    {
        return (sigmoid * score); 
    }
}