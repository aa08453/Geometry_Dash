//Triple Spike

#include "Obstacle3.hpp"
#include <iostream>

Obstacle3::Obstacle3()
{
    srcRect = {149, 477, 178, 59};
    moverRect = {1000, 385, 95, 35};
}


void Obstacle3::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}

