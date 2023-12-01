//Purple rectangles with spikes

#include "Obstacle4.hpp"
#include <iostream>

Obstacle4::Obstacle4()
{
    srcRect = {618, 287, 616, 208};
    moverRect = {1000, 315, 350, 105};
}


void Obstacle4::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}

