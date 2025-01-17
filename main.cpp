#define IMGUI_DEFINE_MATH_OPERATORS
#include <iostream>
#include <imgui.h>
#include <imgui.cpp>
#include <imgui_widgets.cpp>
#include <imgui_tables.cpp>
#include <imgui_internal.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_opengl3.cpp>
#include <imgui_impl_win32.h>
#include <imgui_impl_win32.cpp>
#include <imgui_draw.cpp>
#include <imgui_demo.cpp>
#include <imconfig.h>
// #include <imstb_rectpack.h>
// #include <imstb_textedit.h>
// #include <imstb_truetype.h>

int main() {

    std::cout << "This is my ImGui Cheat!" << std::endl;

    const char* title = "Title";

    ImGui::Begin(title);
    ImGui::End();

    return 0;
}