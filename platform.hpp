#include<SDL.h>

void drawbase(SDL_Renderer* gRenderer, SDL_Texture* platform);

void displayBase(int x, int y);

struct Base
{
    SDL_Rect srcRect, moverRect;
};