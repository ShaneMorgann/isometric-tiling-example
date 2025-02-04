#include "../extern/raylib.h"

#include "../include/constants.hh"
#include "../include/spritesheet.hh"
#include "../include/block.hh"
#include "../include/render.hh"
#include "../include/debug.hh"

Spritesheet spritesheet(config::spritesheet.spritesheetPath, config::spritesheet.spriteSize);

int main(){

    InitWindow(config::window.width, config::window.height, config::window.title);
    SetTargetFPS(config::window.targetFPS);

    Block block{
        spritesheet.selectSpriteUniformSpacing(config::spritesheet.spritesheetTileCoords.x, config::spritesheet.spritesheetTileCoords.y)
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
        debug::drawElements();

        EndDrawing();
    }

    UnloadTexture(block.texture);
    return 0;
}