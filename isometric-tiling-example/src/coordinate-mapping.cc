
#include <raylib.h>
#include "../include/constants.hh"

#include "../include/coordinate-mapping.hh"

Vector2 translations::mapCenterOffset() {

    float mapMiddleX = (config::map.width  - 1) * 0.5f;
    float mapMiddleY = (config::map.height - 1) * 0.5f;

    // find screen space of center tile
    Vector2 mapWindowCenterPoint = translations::blockIsometricPosition({mapMiddleX, mapMiddleY});

    // find screen offset
    float offsetX = config::window.midPoint.x - mapWindowCenterPoint.x;
    float offsetY = config::window.midPoint.y - mapWindowCenterPoint.y;

    offsetX -= config::sprite.sizeHalfScale;
    offsetY -= config::sprite.sizeQuarterScale;

    return { offsetX, offsetY };
}

Vector2 translations::blockIsometricPosition(Vector2 coordinates){

    Vector2 position;
    position.x = (coordinates.x - coordinates.y) * config::sprite.sizeHalfScale + config::map.originOffset.x;
    position.y = (coordinates.x + coordinates.y) * config::sprite.sizeQuarterScale + config::map.originOffset.y;
    
    return position;
}