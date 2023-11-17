#include<iostream>
#include <vector>
#include "platform.hpp"
#include <cstdlib>


using namespace std;

vector <platform> images; 

void platform::drawbase(SDL_Renderer * gRenderer, SDL_Texture *platform)
{
    
    //drawing the platform
    
    SDL_RenderCopy(gRenderer, platform, &images[0].srcRect, &images[0].moverRect);
    
    images[0].moverRect.x -= 40;
    
    if (images[0].moverRect.x < -2000)
    {
        images[0].moverRect.x = 0;
        
    }
            
        
    
    
}


void platform::displayBase(int screenWidth, int screenHeight){
    static int a = 0;
    if (a < 1)
    {
    //std::cout<<"Mouse clicked at: "<<screenWidth<<" -- "<<screenHeight<<std::endl;
        images.emplace_back(platform());
       
    }
    a++;

}

platform::platform(/* args */)
{
    srcRect = {0, 0, 765, 228};
    moverRect = {-10, 420, 3000, 228};
}

platform::~platform()
{

}