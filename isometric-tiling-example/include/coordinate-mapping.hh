#pragma once

#include "raylib.h"
#include "../include/util.hh"

namespace translations {
    Vector2 mapOriginOffset();
    Vector2 blockIsometricPosition(Vector2i);
    Vector2i screenToGridCoordinates(Vector2);
}