#include "Obstacles.hpp"

void Obstacles::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

// void Obstacles::fly()
// {
// }