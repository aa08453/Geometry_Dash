#include "Objects.hpp"

bool Objects::crash = false;
float Objects::velocity = 0.;
float Objects::jumpVelocity = 27.5;
float Objects::gravity = 4.;
bool Objects:: flag = false;

Objects::~Objects()
{
    for (Obstacles* u : L)
    {
        delete u;
        u = nullptr;
    }

    delete S;
    S = nullptr;
    
    delete base;
    base = nullptr;
}

void Objects::drawObjects()
{
    base->draw();
    

    for (auto i = L.begin(); i != L.end();)
    {
        Obstacles* u = *i;
        u->draw();
        u->move();


        if (u->collision(S))
        {
            S->destroy();
            crash = true;
        }

        if (u->delete_obstacle())
        {
            delete u;
            u = nullptr;
            i = L.erase(i);
        }
        else
            ++i;
    }

    if (!crash)
        S->draw();
}


// creates new objects
void Objects::createObstacles( )
{
    int z = rand() % 4;

    if (z == 0)
        L.emplace_back(new Spike());

    else if (z == 1)
        L.emplace_back(new DoubleSpike());

    else if (z == 2)
        L.emplace_back(new TripleSpike());

    else if (z == 3)
        L.emplace_back(new BlockSpike());
    
    // else if (z == 4)
    // {
    //     L.emplace_back(new DoubleSpike());
    //     L.emplace_back(new SpikeDSpike());
    //     L.emplace_back(new SpikeDSpike2());
    // }

    // else
    // {
    //     L.emplace_back(new HangingBase2());
    //     L.emplace_back(new JumpDJump());
    //     L.emplace_back(new JumpDJump2());
    // }

        Prev = L.back();
    }

void Objects::createEssentials()
{
    S = new Sprite();
    base = new platform();
    starting_x = S->getMoverRect().x;
    starting_y = S->getMoverRect().y;
}

void Objects::update(SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE && !flag)
    {
        if (!flag)
        {
            // std::cout << "Going up apparently" << std::endl;
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

bool Objects::addObstacle() const
{
    if (Prev)
        return (Prev->getMoverRect().x <= S->getMoverRect().x + S->getMoverRect().w);
    return true;
}

bool Objects::EndGame() const
{     
    return crash;
}
