#include "drawing.hpp"
#pragma once
class Obstacles
{
protected:
   
    int frame = 0;
    SDL_Rect srcRect, moverRect; // supposed to be protected

public:
    void draw();
    SDL_Rect& getMoverRect();
    virtual void move();
    

};