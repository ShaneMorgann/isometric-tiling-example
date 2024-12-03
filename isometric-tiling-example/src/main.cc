#include "../../.raylib/raylib.h"

#include "../include/map.hh"
#include "../include/window.hh"
#include "../include/spritesheet.hh"
#include "../include/block.hh"
#include "../include/render.hh"


constexpr Map map;
constexpr Window window;
Spritesheet spritesheet("../data/isometric-spritesheet.png", config::SPRITE_SIZE);

int main(){

    InitWindow(window.width, window.height, window.title);
    SetTargetFPS(window.targetFPS);

    Block block{
        spritesheet.selectSpriteUniformSpacing(0, 0),
        spritesheet.spriteSize
    };

    while (!WindowShouldClose()){
        
        BeginDrawing();
        ClearBackground(config::BG_CLEAR_COLOR);

        for(int x = 0; x < map.width; x++){
            for(int y = 0; y < map.height; y++){
                render::drawBlock(&window, &block, &map, Vector2i{x,y});
            }
        }

        // debug ui
        if(config::ENABLE_FPS_UI){
            DrawFPS(config::FPS_POSITION_X, config::FPS_POSITION_Y);
        }
        if(config::ENABLE_DEBUG_UI){
            DrawLineEx({window.windowCenterPoint.x, 0}, {window.windowCenterPoint.x, window.height}, config::DEBUG_LINE_THICKNESS, config::DEBUG_LINE_COLOR);
            DrawLineEx({0, window.windowCenterPoint.y}, {window.width, window.windowCenterPoint.y}, config::DEBUG_LINE_THICKNESS, config::DEBUG_LINE_COLOR);
        }

        EndDrawing();
    }

    UnloadTexture(block.texture);
    return 0;
}