#include <iostream>
#include "Spike.hpp"
#include <vector>

#include <cstdlib>

void Spike::drawObjects(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &spikes[0].srcRect, &spikes[0].moverRect);
}

void Spike::createObject()
{
    if (a < 1)
    {
        cout << "Creating\n";
        Unit spike = {{0, 0, 82, 78}, {900, 500, 20, 20}};
        spikes.emplace_back(spike);
    }
    a++;
}