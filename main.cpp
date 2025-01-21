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

    /* Initialize the library */
    if (!glfwInit()) {
		return -1;
	}

    // Create a window
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    // Begin imgui window or instance idk
    ImGui::Begin("Title", 0, 0);

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window))
    {
        // Render here
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}