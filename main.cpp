#define IMGUI_DEFINE_MATH_OPERATORS
#include <iostream>
#include <imgui.h>
#include <imgui.cpp>
#include <imgui_draw.cpp>
#include <imgui_tables.cpp>
#include <imgui_widgets.cpp>

int main() {

    std::cout << "Hello ImGui!" << std::endl;

    bool* booleanthing;
    const char* text = "Title";

    ImGui::Begin(text, booleanthing, 0);

    return 0;
}