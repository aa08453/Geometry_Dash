#include "drawing.hpp"
#include <iostream>
#pragma once
class Obstacles
{
    protected:
        int frame = 0;
        SDL_Rect srcRect, moverRect;

    public:
        void draw();
        virtual void move() = 0;
        SDL_Rect &getMoverRect();
        bool delete_obstacle();
};