#include "utilityai.hpp"
#include "src/autoconfig/RootLua.hpp"

template <typename T>
T UtilityAI::GetValueLua(
    sol::state& lua,
    const std::string& func_name, 
    T& object
)
{
    sol::function func = lua[func_name];

    if (!func.valid())
        return;

    func(object);
}