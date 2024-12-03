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

    // map dimensions
    constexpr int MAP_WIDTH = 15;
    constexpr int MAP_HEIGHT = 15;

    // sprite properties
    constexpr int SPRITE_SIZE = 32;
    constexpr float SPRITE_SCALE = 3;

    // debug
    constexpr bool ENABLE_FPS_UI = true;
    constexpr int FPS_POSITION_X = 5;
    constexpr int FPS_POSITION_Y = 5;

    constexpr bool ENABLE_DEBUG_UI = false;
    constexpr float DEBUG_LINE_THICKNESS = 3.0f;
    constexpr Color DEBUG_LINE_COLOR = MAGENTA;

}