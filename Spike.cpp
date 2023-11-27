#include "Spike.hpp"

Spike::Spike()
{
    srcRect = {97, 72, 59, 59};
    moverRect = {500, 385, 35, 35};
}

Spike::Spike(int x)
{
    srcRect = {97, 72, 59, 59};
    moverRect = {x, 385, 35, 35};
}

void Spike::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 20;  
}


