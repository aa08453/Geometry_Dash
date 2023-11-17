#include<iostream>
#include <vector>
#include "platform.hpp"


#include <cstdlib>

using namespace std;

vector<Base> images;


void drawbase(SDL_Renderer * gRenderer, SDL_Texture *platform)
{
    
    //drawing the platform
    
    SDL_RenderCopy(gRenderer, platform, &images[0].srcRect, &images[0].moverRect);
    for (int i = 0; i < images.size(); i++)
    {
        // drawing the pigeons in the vector
        //SDL_RenderCopy(gRenderer, platform, &images[0].srcRect, &images[0].moverRect);
        images[0].moverRect.x -= 75;
        // if the pigeon has reached the right side, we reset its starting x coordinate to the left
        if (images[0].moverRect.x < -75)
        {
            images[0].moverRect.x = 1000;
        }
            // moving the pigeon in x direction to the right
        
    }
    
}


void displayBase(int screenWidth, int screenHeight){
    static int a = 0;
    if (a < 1)
    {
    //std::cout<<"Mouse clicked at: "<<screenWidth<<" -- "<<screenHeight<<std::endl;
        
        Base image = {{0, 0, 765, 228}, {0, 420, 1000, 228}};
        images.emplace_back(image);
    }
    a++;

}