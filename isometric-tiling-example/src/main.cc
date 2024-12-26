#include "../../.raylib/raylib.h"

#include "../include/constants.hh"
#include "../include/spritesheet.hh"
#include "../include/block.hh"
#include "../include/render.hh"

Spritesheet spritesheet("../data/sprites/isometric-spritesheet.png", config::sprite.size);

int main(){

    InitWindow(config::window.width, config::window.height, config::window.title);
    SetTargetFPS(config::window.targetFPS);

    Block block{
        spritesheet.selectSpriteUniformSpacing(0, 0)
    };

    while (!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(config::window.backgroundColor);

        for(int x = 0; x < config::map.width; x++){
            for(int y = 0; y < config::map.height; y++){

                float xFloat = static_cast<float>(x);
                float yFloat = static_cast<float>(y);

                render::drawBlock(&block, Vector2{xFloat,yFloat});
            }
        }

        // debug ui
        if(config::debug.enableFPS){
            DrawFPS(config::debug.positionX, config::debug.positionY);
        }
        if(config::debug.enableCenterCross){
            DrawLineEx({config::window.midPoint.x, 0}, {config::window.midPoint.x, static_cast<float>(config::window.height)}, config::debug.centerCrossLineWeight, config::debug.centerCrossLineColor);
            DrawLineEx({0, config::window.midPoint.y}, {static_cast<float>(config::window.width), config::window.midPoint.y}, config::debug.centerCrossLineWeight, config::debug.centerCrossLineColor);
        }

        EndDrawing();
    }

    UnloadTexture(block.texture);
    return 0;
}