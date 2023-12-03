#include "Sprite.hpp"

Sprite::Sprite()
{
    srcRect = {338, 41, 128, 124}; 
    moverRect = {375, 385, 35, 35};
}

void Sprite::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}


void Sprite::destroy()
{
    moverRect = {-200000,385,35,35};
}

SDL_Rect& Sprite::getMoverRect()
{
    return moverRect;
}
