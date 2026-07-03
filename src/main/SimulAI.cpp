#include <Windows.h>
#include <vector>
#include <string>

#include <random>
#include <sol/sol.hpp>
#include "State/state.hpp"

#include "src/main/cppGUI/gui_main.hpp"
#include "src/main/vector/vector_init.hpp"
#include "src/main/LuaBind/LuaBind.hpp"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "hello World!" << std::endl;

    sol::state lua;

    LuaBinding LB;
    WorldState WS;
    Country country;
    MainImGUI MIG;
    VectorCls VC;

    VC.VectorInit(WS); //Vector Init Function
    std::cout << "[Log] Vector Init Success!" << std::endl;
    //std::cout << "[Start] Hello Engine!" << std::endl;
    //MIG.GUIMain(WS);
    //std::cout << "[DEBUG] GUI Main Success!" << std::endl;

    LB.BindindToLua("C:/Users/kym10/Documents/VSCodeProj/SimulAI/src/ini_fld/DebugTestINI/Lua/main.lua", WS, lua);
    std::cout << "[Log] BindindToLua Success!" << std::endl;

    return 0;
}