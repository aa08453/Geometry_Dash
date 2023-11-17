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
        //u->fly();
    }
}

// creates new objects
void Objects::createObject( )
{
    //std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    L.emplace_back(new Spike());
    if (a < 1)
        L.emplace_back(new Sprite());
    a++;
}
