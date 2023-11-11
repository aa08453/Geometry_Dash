#include <SDL.h>

class Spike
{
    public:
        Spike() = default;
        void drawObjects(SDL_Renderer *gRnderer, SDL_Texture *assets);
        void createObject(/*int x,int y*/);

    private:
        vector<Unit> spikes;
        static int a{0};
};


struct Unit
{
    SDL_Rect srcRect, moverRect;
};