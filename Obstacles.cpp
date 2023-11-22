#include "Obstacles.hpp"

void Obstacles::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Obstacles::move()
{
}

const int& Obstacles::get_position() const
{
    return moverRect.x;
}