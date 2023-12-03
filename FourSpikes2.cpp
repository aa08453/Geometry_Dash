#include "FourSpikes2.hpp"
#include <iostream>

FourSpikes2::FourSpikes2()
{
    srcRect = {1425, 1167, 258, 67};
    moverRect = {1000, 385, 158, 35};
}

bool FourSpikes2::collision(Sprite *S) const
{
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}