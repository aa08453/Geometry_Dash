#include "Obstacle2.hpp"
#include <iostream>

Obstacle2::Obstacle2()
{
    std::cout << "hello" << std::endl;
    srcRect = {166, 301, 118, 59};
    moverRect = {1000, 385, 59, 35};
}


void Obstacle2::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}

