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
}

void Objects::drawObjects()
{
    // calling draw functions of all the objects here
    for (Obstacles *u : L)
    {
        u->draw();
        u->move();

        if (collision(u, S))
        {
            // std::cout << "Hello" << std::endl;
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
    //std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    
    if (a < 1)
    {
        
        L.emplace_back(new Spike(750));
        L.emplace_back(new Spike(900));
        S = new Sprite();
        /* could make it input x values (hardcoding the game) for spikes and destroy each spike as it
            goes out of the screen */ 
    }
    a++;
}

bool Objects::collision(Obstacles* u, Sprite* S)
{
    return (u->get_position('x') <= S->get_position('x') && u->get_position('y') <= S->get_position('y'));
}


void Objects::moveup(){
    
    
     SDL_Rect& obstacleRect = S->getMoverRect();
     
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
    SDL_Rect& obstacleRect = S->getMoverRect();
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