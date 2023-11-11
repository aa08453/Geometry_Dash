#include<iostream>
#include "Sprite.hpp"
#include <vector>

#include <cstdlib>

using namespace std;

void Sprite::drawObjects(SDL_Renderer * gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &sprites[0].srcRect, &sprites[0].moverRect);
}

void Sprite::createObject( )
{
    if (a < 1)
    {
        Unit sprite = {{18, 24, 162, 166}, {375, 375, 35, 35}};
        sprites.emplace_back(sprite);
    }
    a++;
}