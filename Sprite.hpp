#include<SDL.h>

class Sprite
{
    public:
        Sprite() = default;
        void drawObjects(SDL_Renderer *gRnderer, SDL_Texture *assets);
        void createObject(/*int x,int y*/);

    private:
        vector<Unit> sprites;
        static int a{0};
}


struct Unit
{
    SDL_Rect srcRect, moverRect;
};