#include "drawing.hpp"
#pragma once
class Obstacles
{
protected:
    SDL_Rect srcRect, moverRect;
    int frame = 0;

public:
    void draw();
    virtual void move();
};