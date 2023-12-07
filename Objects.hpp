#pragma once
#include <ctime>
#include <SDL.h>
#include "Sprite.hpp"
#include "Spike.hpp"
#include "DoubleSpike.hpp"
#include "TripleSpike.hpp"
#include "HangingBase2.hpp"
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
        void reset();

    private: 
        vector<Obstacles *> L;
        Sprite* S{nullptr};
        platform* base{nullptr};
        static bool crash;
        static bool flag;
        static float velocity;
        const static float jumpVelocity;
        const static float gravity;
        Obstacles* Prev{nullptr};   
        int starting_x{0};
        int starting_y{0};
};
