#define IMGUI_DEFINE_MATH_OPERATORS
#include <iostream>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui.cpp>
#include <imgui_draw.cpp>
#include <imgui_tables.cpp>
#include <imgui_widgets.cpp>

int main() {

    std::cout << "Hello ImGui!" << std::endl;

    // Begin imgui window or instance idk
    ImGui::Begin("Title", 0, 0);

    // Dialog boolean
    bool show_dialog = true;

    // Set window size
    ImGui::SetNextWindowSize(ImVec2(400, 200));

    // Check if window is active or appearing
    ImGui::IsWindowAppearing();

    return 0;
}