#include "Objects.hpp"

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
    int Spike_front = u->getMoverRect().x; // spike_position
    int Spike_back = u->getMoverRect().x + u->getMoverRect().w;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_front = S->getMoverRect().x; // sprite_position ~ sprite front point
    int Sprite_height = S->getMoverRect().y; // sprite height
    int Spike_height = u->getMoverRect().y; // spike height
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
