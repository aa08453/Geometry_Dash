#include "JumpDJump.hpp"
#include <iostream>

JumpDJump::JumpDJump()
{
    srcRect = {2311, 593, 71, 133};
    moverRect = {1400, 370, 35, 50};
}

bool JumpDJump:: collision(Sprite* S) const
{
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h;
    int Sprite_height = S->getMoverRect().y;
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Spike_height = moverRect.y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
    (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&(Sprite_height >= Spike_height));
}
