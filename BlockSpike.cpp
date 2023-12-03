//Purple base with hanging
#include "BlockSpike.hpp"
#include <iostream>

BlockSpike::BlockSpike()
{
    srcRect = {2311, 593, 71, 133};
    moverRect = {1000, 370, 35, 50};
}

bool BlockSpike::collision (Sprite* S) const
{
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h;
    int ceiling = moverRect.y;
    int hanging_front = moverRect.x;
    int hanging_back = moverRect.x + moverRect.w;
    return (Sprite_top <= ceiling + 35 && Sprite_back <= hanging_back && Sprite_front >= hanging_front);
}