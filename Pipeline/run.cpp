#include "Pipeline.h"

void Pipeline::run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}