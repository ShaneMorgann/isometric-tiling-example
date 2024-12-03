#pragma once

#include "constants.hh"
#include "raylib.h"

struct Window{
    static constexpr int width = config::WINDOW_WIDTH;
    static constexpr int height = config::WINDOW_HEIGHT;
    static constexpr const char* title = config::WINDOW_TITLE;

    static constexpr int targetFPS = config::TARGET_FPS;

    static constexpr Vector2 windowCenterPoint = {width / 2.0f, height / 2.0f};
};