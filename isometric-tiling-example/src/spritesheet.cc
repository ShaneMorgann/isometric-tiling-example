#include "../include/spritesheet.hh"

Spritesheet::Spritesheet(std::string image, float size){
        Spritesheet::image = LoadImage(image.c_str());
        Spritesheet::spriteSize = size;
        Spritesheet::spriteSizeWidth = size;
        Spritesheet::spriteSizeHeight = size;
        squareSprites = true;
}

Spritesheet::Spritesheet(std::string image, float width, float height){
        Spritesheet::image = LoadImage(image.c_str());
        Spritesheet::spriteSizeWidth = width;
        Spritesheet::spriteSizeHeight = height;
        squareSprites = false;
}

Texture2D Spritesheet::selectSpriteUniformSpacing(int x, int y){
        Rectangle rect{
                Spritesheet::spriteSize * float(x),
                Spritesheet::spriteSize * float(y),
                Spritesheet::spriteSize,
                Spritesheet::spriteSize
        };
        return LoadTextureFromImage(ImageFromImage(Spritesheet::image, rect));
}

Spritesheet::~Spritesheet(){
        UnloadImage(Spritesheet::image);
}