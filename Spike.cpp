#include "Spike.hpp"

Spike::Spike(int x, int w)
{
    srcRect = {144, 113, 59, 59};
    moverRect = {x, 385, w, 35};
}

bool Spike::collision(Sprite* S) const
{
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = moverRect.x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
    (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height));
}


