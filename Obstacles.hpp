#include "drawing.hpp"
#pragma once
class Obstacles
{
    private:

    protected:
        int frame = 0;
        SDL_Rect srcRect, moverRect;

    public:
        void draw();
        virtual void move();
        SDL_Rect &getMoverRect();
};