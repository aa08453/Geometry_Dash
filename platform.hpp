#pragma once
#include<SDL.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include "drawing.hpp"

using namespace std;
class platform
{
    private:
        SDL_Rect srcRect, moverRect;
    public:
        platform();
        void draw();
};


