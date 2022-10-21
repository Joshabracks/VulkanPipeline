#include "Pipeline.h"

void Pipeline::createSurface() {
    if (glfwCreateWindowSurface(instance, window, nullptr, &surface) != VK_SUCCESS) {
        throw std::runtime_error("createSurface: \u001b[31mfailed to create window surface!\u001b[0m");
    }
}