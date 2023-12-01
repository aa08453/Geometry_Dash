#include "Spike.hpp"

Spike::Spike()
{
    srcRect = {144, 113, 59, 59};
    moverRect = {1000, 385, 35, 35};
}

void Spike::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}


