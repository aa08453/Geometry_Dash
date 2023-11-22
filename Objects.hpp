#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "Obstacles.hpp"
#include <vector>
#include <list>
#include <cstdlib>
#pragma once
using namespace std;

class Objects
{
    vector<Obstacles*> L;
    static int a;
    static int yjump;
    
public:
    void drawObjects();
    void createObject( );
    void moveup();
    void movedown();
    SDL_Rect& getMoverRect() {
        return moverRect;
    }

    // created destructor which deletes all dynamic objects
    ~Objects();
protected:
    SDL_Rect srcRect, moverRect;
};
