#include "Spike.hpp"

Spike::Spike(int x, int w)
{
    srcRect = {144, 113, 59, 59};
    moverRect = {x, 385, w, 35};
}

void Spike::move()
{
    moverRect.x -= 20;  
}


