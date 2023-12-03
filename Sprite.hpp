#pragma once
#include "drawing.hpp"
#include <iostream>

class Sprite
{
    public:
        Sprite();
        void draw();
        void destroy();
        SDL_Rect &getMoverRect();

    private:
        SDL_Rect srcRect, moverRect;
};