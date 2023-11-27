#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "Obstacles.hpp"
#include "platform.hpp"
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
    Objects() = default;
    ~Objects();

private:
    vector<Obstacles *> L;
    Sprite *S{nullptr}; // for the sprite
    platform* base{nullptr};
    static int a;
    static bool crash;
    bool collision(Obstacles *u, Sprite *S);
    static int yjump;
};
