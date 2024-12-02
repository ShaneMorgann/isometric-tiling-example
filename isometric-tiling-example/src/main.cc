#include "../../.raylib/raylib.h"

#include "../include/spritesheet.hh"
#include "../include/constants.hh"
#include <raylib.h>

int main(){

    InitWindow(config::WINDOW_WIDTH, config::WINDOW_HEIGHT, config::WINDOW_TITLE.c_str());
    SetTargetFPS(config::TARGET_FPS);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(config::BG_CLEAR_COLOR);

        EndDrawing();
    }

    return 0;
}