#include "Objects.hpp"
#include<iostream>
using namespace std;
int Objects::a = 0;
int Objects::yjump=100;
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