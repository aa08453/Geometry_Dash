#include "drawing.hpp"
#pragma once
class Obstacles
{
protected:
   
    int frame = 0;

public:
    void draw();
    virtual void move();
    const int& get_position() const;
    SDL_Rect srcRect, moverRect; // supposed to be protected
};