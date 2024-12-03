#pragma once

#include "raylib.h"
#include <string>

class Spritesheet{
    
    public:
        Spritesheet(std::string, float);
        Spritesheet(std::string, float, float);
        ~Spritesheet();

        Texture2D selectSpriteUniformSpacing(int x, int y);

        float spriteSize;
        float spriteSizeWidth;
        float spriteSizeHeight;

    private:
        Image image;
        bool squareSprites;
};