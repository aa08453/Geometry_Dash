#include "Spike.hpp"

Spike::Spike()
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {97, 72, 59, 59};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 541, 50, 50};
}
