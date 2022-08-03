#ifdef __APPLE__
// Defined before OpenGL and GLUT includes to avoid deprecation messages
#define GL_SILENCE_DEPRECATION
#endif

#include <iostream>
#include <GLFW/glfw3.h>

int main(int argc, char **argv)
{
    std::cout << "Hello, World!" << std::endl;

    if (!glfwInit()) return -1;

    std::cout << "GLFW lib has been initialized..." << std::endl;

    return 0;
}
