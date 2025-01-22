#define IMGUI_DEFINE_MATH_OPERATORS
#include <iostream>
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

    // Create a window
    window = glfwCreateWindow(640, 480, "Hello ImGui", NULL, NULL);

    // Check for window
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Begin imgui window
    ImGui::SetNextWindowSize({640, 480});
    ImGui::Begin("My Window", 0, 0);
    ImGui::Text("Works!");

    // Make the window's context current
    glfwMakeContextCurrent(window);

    int width = 640;
    int height = 480;

    glfwGetFramebufferSize(window, &width, &height);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0, 255, 0, 255);   // Render here green screen
        glfwSwapBuffers(window);        // Swap front and back buffers
        glfwPollEvents();               // Poll for and process events
    }

    glfwTerminate();

    return 0;
}