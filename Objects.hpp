#include <ctime>
#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "Obstacle2.hpp"
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
    //Obstacle2 *X{nullptr};
    Sprite *S{nullptr}; // for the sprite
    platform* base{nullptr};
    static int a;
    static int velocity;
    static bool crash;
    bool collision(Obstacles *u, Sprite *S);
    static int yjump;
};
