#include<iostream>
#include "Sprite.hpp"
#include <vector>

#include <cstdlib>

using namespace std;

// making vectors to store pigeons, butterflies and bees that are created on clicking the screen
vector <Unit> sprites;


void drawObjects(SDL_Renderer * gRenderer, SDL_Texture *assets)
{
    for (int i = 0; i < sprites.size(); i++)
    {
        // drawing the pigeons in the vector
        SDL_RenderCopy(gRenderer, assets, &sprites[0].srcRect, &sprites[0].moverRect);

        // if the pigeon has reached the right side, we reset its starting x coordinate to the left
        if (sprites[0].moverRect.x > 1000)
            sprites[0].moverRect.x = 0;

            // moving the pigeon in x direction to the right
        sprites[0].moverRect.x += 75;
    }
}


void createObject(int x, int y){
    static int a = 0;
    if (a < 1)
    {
    //std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;

        Unit sprite = {{18, 24, 162, 166}, {0, 400, 45, 45}};
        sprites.emplace_back(sprite);
    }
    a++;

}