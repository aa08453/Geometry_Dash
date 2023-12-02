#include "Objects.hpp"

bool Objects::crash = false;
int Objects::velocity=0;
int Objects::speed=-1;
float Objects::jumpVelocity=20;
float Objects::gravity=1.1;
bool Objects:: flag=false;

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


    if (collision(u, S))
    {
        crash = true;
        S->destroy();
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
    {
        S->draw();
        S->move();
    }
}

// creates new objects
void Objects::createObstacles( )
{
    int z = rand() % 5;

    if (z == 0)
        L.emplace_back(new Spike());
    else if (z == 1)
        L.emplace_back(new DoubleSpike());
    else if (z == 2)
        L.emplace_back(new TripleSpike());
    else if (z == 3)
        L.emplace_back(new Staircase());
    else
        L.emplace_back(new HangingBase());
    
    Prev = L.back();
}

void Objects::createEssentials()
{
    S = new Sprite();
    base = new platform();
}

bool Objects::collision(Obstacles *u, Sprite *S) const
{
    int Spike_front = u->getMoverRect().x;
    int Spike_back = u->getMoverRect().x + u->getMoverRect().w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = u->getMoverRect().y;
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
    (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height));
}

void Objects::update(SDL_Event& e)
{
    if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE && !flag)
    {
        if (!flag)
        {
            std::cout << "Going up apparently" << std::endl;
            velocity = -jumpVelocity;
            flag = true;
        }
    }

    if(flag==true){
    SDL_Rect& obstacleRect = S->getMoverRect();
    
    velocity+=gravity;

        obstacleRect.y += velocity;

        //check if the object is on the platform

        if (obstacleRect.y >= 385)
        {
            obstacleRect.y = 385;
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
