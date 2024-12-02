#include "../include/spritesheet.hh"

Spritesheet::Spritesheet(Image image, float size){
        Spritesheet::image = image;
        Spritesheet::spriteSizeWidth = size;
        Spritesheet::spriteSizeHeight = size;
        squareSprites = true;
}

Spritesheet::Spritesheet(Image image, float width, float height){
        Spritesheet::image = image;
        Spritesheet::spriteSizeWidth = width;
        Spritesheet::spriteSizeHeight = height;
        squareSprites = false;
}

Texture2D Spritesheet::selectSpriteUniformSpacing(int x, int y){
        Rectangle rect{
                Spritesheet::spriteSizeWidth * float(x),
                Spritesheet::spriteSizeHeight * float(y),
                Spritesheet::spriteSizeWidth,
                Spritesheet::spriteSizeHeight
        };
        return LoadTextureFromImage(ImageFromImage(Spritesheet::image, rect));
}

Spritesheet::~Spritesheet(){
        UnloadImage(Spritesheet::image);
}