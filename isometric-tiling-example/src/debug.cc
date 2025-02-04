#include "../extern/raylib.h"

#include "../include/constants.hh"
#include "../include/debug.hh"

void debug::drawElements(){

    if(config::debug.enableFPS){
        drawFPSCounter();
    }
    if(config::debug.enableCenterCross){
        drawCenterCross();
    }

}

void debug::drawFPSCounter(){

    DrawFPS(config::debug.positionX, config::debug.positionY);
}

void debug::drawCenterCross(){
    
    DrawLineEx({config::window.midPoint.x, 0}, {config::window.midPoint.x, static_cast<float>(config::window.height)}, config::debug.centerCrossLineWeight, config::debug.centerCrossLineColor);
    DrawLineEx({0, config::window.midPoint.y}, {static_cast<float>(config::window.width), config::window.midPoint.y}, config::debug.centerCrossLineWeight, config::debug.centerCrossLineColor);
}