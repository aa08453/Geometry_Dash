#ifndef DRAWING_HPP
#define DRAWING_HPP
#include <SDL.h>
#pragma 

class Drawing
{
public:
    // The window renderer
    static SDL_Renderer *gRenderer;
    // global reference to png image sheets
    static SDL_Texture *assets;
    static SDL_Texture *ground;

    //static SDL_Texture *obstacles;
};

#endif