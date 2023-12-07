#include "Objects.hpp"

bool Objects::crash = false;
float Objects::velocity = 0.;
const float Objects::jumpVelocity = 27.5;
const float Objects::gravity = 4.;
bool Objects::flag = false;

// deleting objects created in the destructor
Objects::~Objects()
{
    for (Obstacles *u : L)
    {
        delete u;
        u = nullptr;
    }

    delete S;
    S = nullptr;

    delete base;
    base = nullptr;
}

// drawing all game objects
void Objects::drawObjects()
{
    base->draw();

    for (auto i = L.begin(); i != L.end();)
    {
        Obstacles *u = *i;
        u->draw();
        u->move();

        // checking for collision with each obstacle
        if (u->collision(S))
        {
            S->destroy();
            crash = true;
        }

        // checking if the obstacle has left the game screen and needs to be deleted
        if (u->delete_obstacle())
        {
            delete u;
            u = nullptr;
            i = L.erase(i);
        }
        else
            ++i;
    }
    
    // drawing the sprite if it has not collided
    if (!crash)
        S->draw();
}

// creates new objects randomly
void Objects::createObstacles()
{
    int z = rand() % 6;

    if (z == 0)
        L.emplace_back(new Spike());

    else if (z == 1)
        L.emplace_back(new DoubleSpike());

    else if (z == 2)
        L.emplace_back(new TripleSpike());

    else if (z == 3)
        L.emplace_back(new BlockSpike());

    else if (z == 4)
    {
        L.emplace_back(new DoubleSpike());
        L.emplace_back(new SpikeDSpike());
        L.emplace_back(new SpikeDSpike2());
    }

    else
    {
        L.emplace_back(new HangingBase2());
        L.emplace_back(new JumpDJump());
        L.emplace_back(new JumpDJump2());
    }

    // keeping track of last created object
    Prev = L.back();
}

// function to create base and sprite
void Objects::createEssentials()
{
    S = new Sprite();
    base = new platform();
    starting_x = S->getMoverRect().x;
    starting_y = S->getMoverRect().y;
}

// updating the sprite position when it has to jump
void Objects::update(SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE && !flag)
    {
        if (!flag)
        {
            velocity = -jumpVelocity;
            flag = true;
        }
    }

    if (flag)
    {

        SDL_Rect &obstacleRect = S->getMoverRect();
        velocity += gravity;
        obstacleRect.y += velocity;

        if (obstacleRect.y >= starting_y)
        {
            obstacleRect.y = starting_y;
            velocity = 0;
            flag = false;
        }
    }
}

// function to check if new obstacle should be introduced
bool Objects::addObstacle() const
{
    if (Prev)
        return (Prev->getMoverRect().x <= S->getMoverRect().x + S->getMoverRect().w);
    return true;
}

// tells if the game needs to end by checking if a collision has occurred
bool Objects::EndGame() const
{
    return crash;
}


void Objects::reset(){
     for (Obstacles *u : L)
    {
        delete u;
        u = nullptr;
    }
    L.clear();

    // Reset sprite and base
    delete S;
    S = new Sprite();
    delete base;
    base = new platform();

    // Reset other variables
    crash = false;
    flag = false;
    velocity = 0.0;
    Prev = nullptr;
    starting_x = S->getMoverRect().x;
    starting_y = S->getMoverRect().y;
}