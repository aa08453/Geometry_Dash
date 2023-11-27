#include "platform.hpp"

platform::platform( )
{
    srcRect = {0, 0, 765, 228};
    moverRect = {-10, 420, 3000, 228};
}

void platform::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::ground, &srcRect, &moverRect);

    moverRect.x -= 40;
    
    if (moverRect.x < -2000)
        moverRect.x = 0;
}



