#include<SDL.h>

class platform
{
private:
    SDL_Rect srcRect, moverRect;
public:
    platform(/* args */);
    ~platform();
    void drawbase(SDL_Renderer* gRenderer, SDL_Texture* platform);

    void displayBase(int x, int y);
};


