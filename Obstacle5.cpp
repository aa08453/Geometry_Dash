//Purple base with hanging

#include "Obstacle5.hpp"
#include <iostream>

Obstacle5::Obstacle5()
{
    srcRect = {140, 720, 540, 495};
    moverRect = {1000, 315, 350, 105};
}


void Obstacle5::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}

