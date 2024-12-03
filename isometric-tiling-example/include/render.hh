#pragma once

#include "raylib.h"
#include "util.hh"
#include "block.hh"
#include "map.hh"
#include "window.hh"

namespace render{

    Vector2 mapOriginOffset(const Window*, const Map*, Block*);
    Vector2 blockIsometricPosition(Vector2i, Vector2, Vector2);

    void drawBlock(const Window*, Block*, const Map*, Vector2i);
}