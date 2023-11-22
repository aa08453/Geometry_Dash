#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include <vector>
#include <list>
#include <cstdlib>
#include <iostream>
#pragma once
using namespace std;

class Objects
{
    vector<Obstacles*> L;
    Sprite* S; // for the sprite
    static int a;
    static bool crash;
    bool collision(Obstacles *u, Sprite *S);

public:
    void drawObjects();
    void createObject( );

        // created destructor which deletes all dynamic objects
    ~Objects();
};
