#include <iostream>
#include <imgui.cpp>
#include <imgui.h>
#include <glfw3.h>
using namespace std;

int main() {

    std::cout << "This is my ImGui Cheat!" << std::endl;

    const char* title = "Title";

    ImGui::Begin(title);
    ImGui::End();

    return 0;
}