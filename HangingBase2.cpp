//Purple base with hanging

#include "HangingBase2.hpp"
#include <iostream>

HangingBase2::HangingBase2()
{
    srcRect = {240, 720, 339, 290};
    moverRect = {1050, 170, 250, 105};
}

bool HangingBase2::collision(Sprite *S) const
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
