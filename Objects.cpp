#include <SDL.h>
#include "Objects.hpp"
#include <iostream>
#include <algorithm>

int Objects::a = 0;
bool Objects::crash = false;
int Objects::yjump=100;
int Objects::velocity=0;


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
    //X->draw();
    //for (auto i = L.begin(); i != L.end();)

    
    x = rand()%4;
       
        
    L[x]->draw();
    L[x]->move();


    if (collision(L[x], S))
    {
        crash = true;
        S->destroy();
    }

    //Spike *sp = dynamic_cast<Spike *>(u);
    if (L[x]->delete_obstacle())
    {
        delete L[x];
        L.erase(L.begin() + x); 
        // status = true;
        //return;
        //i = L.erase(i);
        x = rand()%L.size();
        std::cout<<"hello"<<std::endl;
    }
    
    // SDL_Delay(16);
        
        
    

    if (!crash)
    {
        S->draw();
        S->move();
    }

    
}


// creates new objects
void Objects::createObject()
{
    if (a < 1)
    {
        /* could make it input x values (hardcoding the game) for spikes and destroy each spike as it
            goes out of the screen */
        L.emplace_back(new Spike());
        L.emplace_back(new Obstacle2());
        L.emplace_back(new Obstacle3());
        L.emplace_back(new Obstacle4());
        
        //std::random_shuffle(L.begin(), L.end());
        
        //X.emplace_back(L[0]);
        
        S = new Sprite();
        base = new platform();
    }
    a++;
}

bool Objects::collision(Obstacles *u, Sprite *S){return false;}
// {
//     int Spike_front = u->getMoverRect().x;
//     int Spike_back = u->getMoverRect().x + u->getMoverRect().w;
//     int Sprite_front = S->getMoverRect().x;
//     int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
//     int Sprite_height = S->getMoverRect().y;
//     int Spike_height = u->getMoverRect().y;
//     return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
//     (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height));
// }

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

    // Limit the downward velocity to prevent the sprite from falling too fast
    if (velocity > 10.0)
    {
        velocity = 10.0;
    }
}

// void Objects::movedown(){
//     SDL_Rect& obstacleRect = S->getMoverRect();
//     if (obstacleRect.y + yjump == 385)
//         {
//             obstacleRect.y += yjump;
            
//         }
//     else
//         {
//             obstacleRect.y = 385;
            
//         }
// }
     
        // if (obstacleRect.y - yjump == 290)
        //     obstacleRect.y -= yjump;

        // else
        //     obstacleRect.y = 290;


void Objects::movedown(){
    SDL_Rect& obstacleRect = S->getMoverRect();
    if (obstacleRect.y + yjump == 385)
        obstacleRect.y += yjump;

    else
        obstacleRect.y = 385;
}
