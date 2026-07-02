#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

struct WorldState;

class MainImGUI
{
public:
    int GUIMain(const WorldState &WS);

    void GUIWorldStateTree(const WorldState& WS);
}; 