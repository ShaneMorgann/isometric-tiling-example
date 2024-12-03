#include "../include/spritesheet.hh"

Spritesheet::Spritesheet(const char* path, float size){
        Spritesheet::image = LoadImage(path);
        Spritesheet::spriteSize = size;
        Spritesheet::spriteSizeWidth = size;
        Spritesheet::spriteSizeHeight = size;
        squareSprites = true;
}

Spritesheet::Spritesheet(const char* path, float width, float height){
        Spritesheet::image = LoadImage(path);
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