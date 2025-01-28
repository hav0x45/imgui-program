#define IMGUI_DEFINE_MATH_OPERATORS
#include <iostream>
#include <glad/glad.h>
#include <glad/glad.c>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui.cpp>
#include <imgui_draw.cpp>
#include <imgui_tables.cpp>
#include <imgui_widgets.cpp>

int main() {

    GLFWwindow* window;

    // Initialize the library
    if (!glfwInit()) {
		return -1;
	}

    int width = 640;
    int height = 480;

    // Create a window
    window = glfwCreateWindow(width, height, "Hello ImGui", NULL, NULL);

    // Check for window
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Begin imgui window
    ImGui::Begin("My Window", 0, 0);

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window)  || GetAsyncKeyState(VK_SPACE)) {
        glad_glClearColor(0, 255, 0, 255);   // Render here green screen
        glfwSwapBuffers(window);        // Swap front and back buffers
        glfwPollEvents();               // Poll for and process events
    }

    glfwTerminate();

    return 0;
}