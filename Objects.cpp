#include "Objects.hpp"


bool Objects::crash = false;
int Objects::yjump=100;
int Objects::velocity=0;


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

void Objects::moveup(){
    
    SDL_Rect& obstacleRect = S->getMoverRect();
    
    const float gravity = 9.8; // Adjust this value based on your requirements
    float jumpVelocity = -10.0; // Adjust this value based on your requirements
    cout<<obstacleRect.y<<endl;
    // Only apply initial velocity if the sprite is on the ground (you might need a flag for this)
    if (obstacleRect.y == 385)
    {
        velocity = jumpVelocity;
    }

    obstacleRect.y += velocity;
    velocity += gravity;

    if (velocity > 10.0)
    {
        velocity = 10.0;
    }
}



void Objects::movedown()
{
    SDL_Rect& obstacleRect = S->getMoverRect();
    if (obstacleRect.y + yjump == 385)
        obstacleRect.y += yjump;

    else
        obstacleRect.y = 385;
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
