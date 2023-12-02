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
        void moveup();
        void movedown();
        bool addObstacle() const;
        bool EndGame() const;

    private: 
        vector<Obstacles *> L;
        Sprite* S{nullptr};
        platform* base{nullptr};
        static int velocity;
        static bool crash;
        static int yjump;
        bool collision(Obstacles* u, Sprite* S) const;
        Obstacles* Prev{nullptr};   
};
