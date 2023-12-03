// #include<SDL.h>
#include "drawing.hpp"
#include "Obstacles.hpp"
#include <iostream>

class Sprite
{
    public:
        Sprite();
        void move();
        void draw();
        void destroy();
        SDL_Rect &getMoverRect();
       

    private:
        SDL_Rect srcRect, moverRect;
};