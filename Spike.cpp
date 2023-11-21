#include "Spike.hpp"

Spike::Spike()
{
    srcRect = {97, 72, 59, 59};
    moverRect = {500, 370, 50, 50};
}

Spike::Spike(int x)
{
    srcRect = {97, 72, 59, 59};
    moverRect = {x, 370, 50, 50};
}

void Spike::move()
{
    if (moverRect.x < 0)
        moverRect.x = 1000;
    moverRect.x -= 40;
    
}
