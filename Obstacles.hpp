#pragma once
#include "drawing.hpp"
#include <iostream>
#include "Sprite.hpp"

class Obstacles
{
    protected:
        int frame = 0;
        SDL_Rect srcRect, moverRect;

    public:
        void draw();
        void move();
        SDL_Rect &getMoverRect();
        bool delete_obstacle();
        virtual bool collision(Sprite *S) const = 0;
};