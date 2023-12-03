#pragma once
#include <ctime>
#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "DoubleSpike.hpp"
#include "TripleSpike.hpp"
#include "HangingBase.hpp"
#include "HangingBase2.hpp"
#include "staircase1.hpp"
#include "staircase2.hpp"
#include "staircase3.hpp"
#include "staircase4.hpp"
#include "staircase5.hpp"
#include "FourSpikes1.hpp"
#include "FourSpikes2.hpp"
#include "BlockSpike.hpp"
#include "SpikeDSpike.hpp"
#include "SpikeDSpike2.hpp"
#include "JumpDJump.hpp"
#include "JumpDJump2.hpp"
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


    private: 
        vector<Obstacles *> L;
        Sprite* S{nullptr};
        platform* base{nullptr};
        static bool crash;
        static bool flag;
        static float velocity;
        static float jumpVelocity;
        static float gravity;
        //bool collision(Obstacles* u, Sprite* S) const;
        Obstacles* Prev{nullptr};   
};
