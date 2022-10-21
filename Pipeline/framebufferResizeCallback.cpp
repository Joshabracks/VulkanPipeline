#include "Pipeline.h"

void Pipeline::framebufferResizeCallback(GLFWwindow* window, int width, int height) {
    auto app = reinterpret_cast<Pipeline*>(glfwGetWindowUserPointer(window));
    app->framebufferResized = true;
}