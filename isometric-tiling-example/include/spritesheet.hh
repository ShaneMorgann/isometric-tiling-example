#pragma once

#include "raylib.h"

class Spritesheet{
    
    public:
        Spritesheet(Image, float);
        Spritesheet(Image, float, float);
        ~Spritesheet();

        Texture2D selectSpriteUniformSpacing(int x, int y);

        float spriteSizeWidth;
        float spriteSizeHeight;

    private:
        Image image;
        bool squareSprites;
};