#include "gui_main.hpp"
#include "../autoconfig/RootImGuiAuto.hpp"
#include "imgui.h"
#include "src/autoconfig/Root.hpp"
#include "./src/main/State/state.hpp"

void MainImGUI::GUIWorldStateTree(const WorldState &WS)
{
    RootConfigImGui RootConfigimgui;
    RootConfig rootconfig;

    static int selected_id = -1;

    if (WS.Countries.size() > 1)
    {
        for (size_t c = 0; c < WS.Countries[1].Root.size(); ++c) //Error Point
        {
            auto& country = WS.Countries[c];

            bool is_leaf = country.Root.empty();

            ImGuiTreeNodeFlags flags = ImGuiTreeNodeFlags_OpenOnArrow | ImGuiTreeNodeFlags_OpenOnDoubleClick;
            if (is_leaf) 
            {
                flags |= ImGuiTreeNodeFlags_Leaf; 
            }
            if (selected_id == c)
            {
                flags |= ImGuiTreeNodeFlags_Selected;
            }

            if (!country.Root.empty())
            {
                bool is_open = ImGui::TreeNodeEx(
                    (void*)(intptr_t)c,
                    flags,
                    "Root",
                    c
                );

                if (ImGui::IsItemClicked())
                {
                    selected_id = c;
                }

                if (is_open)
                {
                    if (!is_leaf)
                    {
                        //Real if Tree Logic
                        RootConfigimgui.Draw(rootconfig);
                    }

                    ImGui::TreePop();
                }
            }
        }
    } 
}