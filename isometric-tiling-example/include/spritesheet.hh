#pragma once

#include "../extern/raylib.h"

class Spritesheet{
    
    public:
        Spritesheet(const char*, float);
        Spritesheet(const char*, float, float);
        ~Spritesheet();

        Texture2D selectSpriteUniformSpacing(int x, int y);

        float spriteSize;
        float spriteSizeWidth;
        float spriteSizeHeight;

    private:
        Image image;
        bool squareSprites;
};