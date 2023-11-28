#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "Obstacles.hpp"
#include <vector>
#include <list>
#include <cstdlib>
#include <iostream>
#pragma once
using namespace std;

class Objects
{
public:
    void drawObjects();
    void createObject( );
    void moveup();
    void movedown();
    
    // created destructor which deletes all dynamic objects
    ~Objects();
protected:
    SDL_Rect srcRect, moverRect;

private:
    vector<Obstacles *> L;
    Sprite *S; // for the sprite
    static int a;
    static int velocity;
    static bool crash;
    bool collision(Obstacles *u, Sprite *S);
    static int yjump;
};
