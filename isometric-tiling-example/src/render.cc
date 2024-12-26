
#include "../include/constants.hh"
#include "../include/render.hh"
#include "../include/coordinate-mapping.hh"

void render::drawBlock(Block* block, Vector2 coords){

    Vector2 position = translations::blockIsometricPosition(coords);
    DrawTextureEx(block-> texture, position, 0, config::sprite.scale, WHITE);
}