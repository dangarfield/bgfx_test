#include <GLFW/glfw3.h>
#include <iostream>

#define WNDW_WIDTH 1600
#define WNDW_HEIGHT 900

int main(int, char **) {
  std::cout << "glfw start\n";
  glfwInit();
  GLFWwindow *window =
      glfwCreateWindow(WNDW_WIDTH, WNDW_HEIGHT, "Hello world!", NULL, NULL);
  std::cout << "glfw end\n";
}
