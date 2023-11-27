#include "Objects.hpp"
int Objects::a = 0;
bool Objects::crash = false;
int Objects::yjump=100;

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

void Objects::drawObjects()
{
    base->draw();
    for (Obstacles *u : L)
    {
        u->draw();
        u->move();

        if (collision(u, S))
        {
            crash = true;
            S->destroy();
        }
    }
    
    if (!crash)
    {
        S->draw();
        S->move(); 
    }
}

// creates new objects
void Objects::createObject( )
{
    if (a < 1)
    {
        /* could make it input x values (hardcoding the game) for spikes and destroy each spike as it
            goes out of the screen */
        L.emplace_back(new Spike(750));
        L.emplace_back(new Spike(900));
        S = new Sprite();
        base = new platform();
    }
    a++;
}

bool Objects::collision(Obstacles* u, Sprite* S)
{
    int c = S->getMoverRect().x;
    int b = S->getMoverRect().x + S->getMoverRect().w;
    int a = u->getMoverRect().x;
    int d = S->getMoverRect().y;
    int e = u->getMoverRect().y;
    return ((a <= b && a >= c) && (d >= e));
}

void Objects::moveup(){
    
     SDL_Rect& obstacleRect = S->getMoverRect();
     
        if (obstacleRect.y - yjump == 290)
            obstacleRect.y -= yjump;

        else
            obstacleRect.y = 290;
}

void Objects::movedown(){
    SDL_Rect& obstacleRect = S->getMoverRect();
    if (obstacleRect.y + yjump == 385)
        obstacleRect.y += yjump;

    else
        obstacleRect.y = 385;
}