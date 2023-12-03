//Triple Spike

#include "TripleSpike.hpp"
#include <iostream>

TripleSpike::TripleSpike()
{
    srcRect = {149, 477, 178, 59};
    moverRect = {1000, 385, 95, 35};
}

bool TripleSpike::collision(Sprite *S) const
{
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
    (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&(Sprite_height >= Spike_height));
}
