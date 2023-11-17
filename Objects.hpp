#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include <vector>
#include <list>
#include <cstdlib>
#pragma once
using namespace std;

class Objects
{
    vector<Obstacles*> L;
    static int a;

public:
    void drawObjects();
    void createObject( );

    // created destructor which deletes all dynamic objects
    ~Objects();
};
