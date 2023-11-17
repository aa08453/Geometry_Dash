#include "Spike.hpp"

Spike::Spike()
{
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {0, 0, 82, 78};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}
