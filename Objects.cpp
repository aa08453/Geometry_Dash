#include "Objects.hpp"
#include<iostream>
using namespace std;
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
void Objects::moveup(){
    
    
     SDL_Rect& obstacleRect = L[1]->getMoverRect();
     
        if (obstacleRect.y - yjump == 290)
        {
            obstacleRect.y -= yjump;
            cout<<obstacleRect.y<<endl;
            
             // this part for testing
        }
        else
        {
            obstacleRect.y = 290;
            cout<<obstacleRect.y<<endl;

            // cout<<sprites[i].moverRect.y<<endl;
        }
    
}

void Objects::movedown(){
    SDL_Rect& obstacleRect = L[1]->getMoverRect();
    if (obstacleRect.y + yjump == 385)
        {
            obstacleRect.y += yjump;
            cout<<obstacleRect.y<<endl;

             // this part for testing
        }
    else
        {
            obstacleRect.y = 385;
            cout<<obstacleRect.y<<endl;

            // cout<<sprites[i].moverRect.y<<endl;
        }
}