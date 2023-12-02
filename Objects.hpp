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
    
    void update(SDL_Event& e);//this update function has  moveup function
    // void jump();
    Objects() = default;
    ~Objects();

private:
    vector<Obstacles *> L;
    Sprite *S{nullptr}; // for the sprite
    platform* base{nullptr};
    static int a;
    static int velocity;
    static float  jumpVelocity;
    static float gravity;
    static bool crash;
    static bool flag;
    bool collision(Obstacles *u, Sprite *S);
    static int yjump;
};
