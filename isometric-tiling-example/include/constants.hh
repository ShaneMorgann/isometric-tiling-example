#pragma once

#include "coordinate-mapping.hh"
#include "raylib.h"

namespace config{

    /* TODO:
        - Due to this being a simple example project, this will eventually become a global reference for values
        - An option to populate these values with a JSON file will eventually be added
            - Placeholder values will remain, but can be overriden with the presence of a configuration file
        
        - These changes will also require constants.hh to be changed as these values will have the ability to change
    */

    // window config
    inline struct {
        int width = 1920;
        int height = 1080;
        Vector2 midPoint{width * 0.5f, height * 0.5f};

        const char* title = ("Isometric-Tiling-Example");

        Color backgroundColor = BLACK;
        int targetFPS = 120;
    } window;
    
    // map config
    inline struct{
        int width = 10;
        int height = 10;
        Vector2 originOffset = translations::mapCenterOffset();
    } map;

    // sprite config
    inline struct{
        int size = 32;
        float scale = 4;
        float sizeScale = size * scale;
        float sizeHalfScale = sizeScale * 0.5f;
        float sizeQuarterScale = sizeScale * 0.25f;
    } sprite;

    // debug config
    inline struct{
        bool enableFPS = true;
        int positionX = 5;
        int positionY = 5;

        bool enableCenterCross = false;
        float centerCrossLineWeight = 2.0f;
        Color centerCrossLineColor = MAGENTA;
    } debug;

}