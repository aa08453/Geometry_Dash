#include "Objects.hpp"

int Objects::a = 0;
bool Objects::crash = false;
int Objects::velocity=-10;
float Objects::jumpVelocity=15;
float Objects::gravity=1;
bool Objects:: flag=false;

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






void Objects::update(SDL_Event& e) {
    // Call the moveup function to handle jumping
    if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE && !flag) {
        if (!flag) {
        velocity = -jumpVelocity;
        flag = true;
    }
    }

    if(flag==true){
    SDL_Rect& obstacleRect = S->getMoverRect();
    
    //applying gravity of the motion
    // std::cout << "Event Type: " << e.type << ", Key Symbol: " << e.key.keysym.sym << std::endl;
    velocity+=gravity;

    obstacleRect.y+=velocity;

    //check if the object is on the platform

    if(obstacleRect.y>=385){
        obstacleRect.y=385;
        velocity=0;
        flag=false;
    }
    }

}







