#include "Obstacles.hpp"

void Obstacles::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Obstacles::move()
{
    moverRect.x -= 20;
}

SDL_Rect& Obstacles::getMoverRect()
{
    return moverRect;
}

bool Obstacles::delete_obstacle()
{
    return (moverRect.x <= -moverRect.w);
}