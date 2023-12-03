//Purple rectangles with spikes

#include "SpikeDSpike.hpp"
#include <iostream>

SpikeDSpike::SpikeDSpike()
{
    srcRect = {1247, 673, 60, 118};
    moverRect = {1150, 315, 45, 50};
}

bool SpikeDSpike::collision(Sprite *S) const
{
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
    (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height));
}
