#pragma once
#include <ctime>
#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "DoubleSpike.hpp"
#include "TripleSpike.hpp"
#include "HangingBase.hpp"
#include "Staircase.hpp"
#include "Obstacles.hpp"
#include "platform.hpp"
#include <vector>
#include <list>
#include <cstdlib>
#include <iostream>

using namespace std;

class Objects
{
    public:
        Objects() = default;
        ~Objects();
        void drawObjects();
        void createObstacles();
        void createEssentials();
        bool addObstacle() const;
        bool EndGame() const;
        void update(SDL_Event &e);
        void movement(bool flag);

    private : vector<Obstacles *> L;
        Sprite* S{nullptr};
        platform* base{nullptr};
        static bool crash;
        static bool flag;
        static float velocity;
        static float jumpVelocity;
        static float gravity;
        bool collision(Obstacles* u, Sprite* S) const;
        Obstacles* Prev{nullptr};   
};
