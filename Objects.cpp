#include "Objects.hpp"

int Objects::a = 0;

Objects::~Objects()
{
    for (Obstacles *u : L)
    {
        delete u;
        u = nullptr;
    }
}

void Objects::drawObjects()
{
    // calling draw functions of all the objects here
    for (Obstacles *u : L)
    {
        u->draw();
        u->move();
    }
}

// creates new objects
void Objects::createObject( )
{
    //std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    
    if (a < 1)
    {
        L.emplace_back(new Sprite());
        L.emplace_back(new Spike(500));
        L.emplace_back(new Spike(750));

        /* could make it input x values (hardcoding the game) for spikes and destroy each spike as it
            goes out of the screen */ 

    }
    a++;
}
