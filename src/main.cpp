#include <iostream>

#include <GLFW/glfw3.h>

int main() {
    std::cout << "OpenGL Version: " << glfwGetVersionString() << std::endl;

    return 0;
}