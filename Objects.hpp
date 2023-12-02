#include <ctime>
#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "DoubleSpike.hpp"
#include "Obstacle3.hpp"
#include "Obstacle4.hpp"
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
    Objects() = default;
    ~Objects();
    void drawObjects();
    void createObstacles( );
    void createEssentials();
    void moveup();
    void movedown();
    Objects() = default;
    ~Objects();

private:
    vector <Obstacles*> L;
    Sprite* S{nullptr};
    platform* base{nullptr};
    static int a;
    static int velocity;
    static bool crash;
    static int yjump;
    bool collision(Obstacles* u, Sprite* S);
    
};
