#pragma once

#include "raylib.h"
#include "constants.hh"

struct Block{
    Texture2D texture;
    float size;
    float sizeScale = size * config::SPRITE_SCALE;
    float sizeHalfScale = sizeScale * 0.5;

    Vector2 sizeHalfScaleVector{sizeHalfScale, sizeHalfScale};
};