#include "Objects.hpp"

int Objects::a = 0;
bool Objects::crash = false;

Objects::~Objects()
{
    for (Obstacles *u : L)
    {
        delete u;
        u = nullptr;
    }

    delete S;
    S = nullptr;
}

void Objects::drawObjects()
{
    // calling draw functions of all the objects here
    S->draw();
    S->move();

    if (crash == false)
    {
        int i = 0;
        for (Obstacles *u : L)
        {
            u->draw();
            u->move();
            
            std::cout << i << ": " << u->get_position() << std::endl;
            std::cout << S->get_position() << std::endl;
            {
                //std::cout << "Hello" << std::endl;
                //S->destroy();
                //crash = true;
            }
            i++;
        }
    }

}


// creates new objects
void Objects::createObject( )
{
    //std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    
    if (a < 1)
    {
        
        L.emplace_back(new Spike(500));
        L.emplace_back(new Spike(750));
        S = new Sprite();
        /* could make it input x values (hardcoding the game) for spikes and destroy each spike as it
            goes out of the screen */ 
    }
    a++;
}

bool Objects::collision(Obstacles* u, Sprite* S)
{
    //std::cout << "Colliding" << std::endl;
    return (u->get_position() == S->get_position());
}
