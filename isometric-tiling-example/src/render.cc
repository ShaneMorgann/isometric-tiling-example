#include "../include/render.hh"
    
Vector2 render::mapOriginOffset(const Window* window, const Map* map, Block* block){
    
    float x = window-> windowCenterPoint.x - block->sizeHalfScale;
    float y = window -> windowCenterPoint.y - ((map->height * block->sizeHalfScale * 0.50f) + block->sizeHalfScale);
    
    return Vector2{x, y};
}

Vector2 render::blockIsometricPosition(Vector2i coords, Vector2 halfSize, Vector2 originOffset) {

    float x = ((coords.x - coords.y) * halfSize.x) + originOffset.x;
    float y = (((coords.x + coords.y) * halfSize.y * 0.5f) + halfSize.y * 0.5) + originOffset.y;

    return {x, y};
}

void render::drawBlock(const Window* window, Block* block, const Map* map, Vector2i coords){

    Vector2 position = blockIsometricPosition(coords, block->sizeHalfScaleVector, mapOriginOffset(window, map, block));
    DrawTextureEx(block->texture, position, 0, config::SPRITE_SCALE, WHITE);
}