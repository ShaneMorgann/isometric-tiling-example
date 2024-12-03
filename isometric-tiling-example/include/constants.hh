#pragma once

#include "raylib.h"

namespace config{

    // window config
    constexpr int WINDOW_WIDTH = 1920;
    constexpr int WINDOW_HEIGHT = 1080;
    constexpr const char* WINDOW_TITLE = ("Isometric-Tiling-Example");
    constexpr Color BG_CLEAR_COLOR = BLACK;

    // game logic
    constexpr int TARGET_FPS = 120;
    constexpr float SPRITE_SCALE = 3;

    // map dimensions
    constexpr int MAP_WIDTH = 15;
    constexpr int MAP_HEIGHT = 15;

    constexpr int SPRITE_SIZE = 32;

}