#include "Sprite.hpp"

Sprite::Sprite()
{
    srcRect = {291, 0, 128, 124}; 
    moverRect = {375, 385, 35, 35};
}

void Sprite::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Sprite::move()
{
    
}

void Sprite::destroy()
{
    moverRect = {2000,2000,35,35};
}

SDL_Rect& Sprite::getMoverRect()
{
    return moverRect;
}
