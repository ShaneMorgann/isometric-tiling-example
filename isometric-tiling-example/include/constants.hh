#pragma once

#include <string>
#include "raylib.h"

namespace config{

    // window config
    constexpr int WINDOW_WIDTH = 1920;
    constexpr int WINDOW_HEIGHT = 1080;
    const std::string WINDOW_TITLE = ("Isometric-Tiling-Example");
    constexpr Color BG_CLEAR_COLOR = BLACK;

    // game logic
    constexpr int TARGET_FPS = 120;

    // map dimensions
    constexpr int MAP_WIDTH = 10;
    constexpr int MAP_HEIGHT = 10;

}