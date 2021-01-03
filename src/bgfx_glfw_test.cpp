#include "GLFW/glfw3.h"
#include "bgfx/bgfx.h"
#include <iostream>

#define WNDW_WIDTH 1600
#define WNDW_HEIGHT 900

int main(int, char **) {
  std::cout << "start!\n";
  glfwInit();
  GLFWwindow *window =
      glfwCreateWindow(WNDW_WIDTH, WNDW_HEIGHT, "Hello, bgfx!", NULL, NULL);
  std::cout << "end!\n";
}
