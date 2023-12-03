#include "Objects.hpp"
#include <iostream>

bool Objects::crash = false;
float Objects::velocity = 0.;
int Objects::speed = -1;
float Objects::jumpVelocity = 27.5;
float Objects::gravity = 4;
bool Objects:: flag = false;
int Objects:: z = 0;

Objects::~Objects()
{
    for (Obstacles* u : L)
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
    

    for (auto i = L.begin(); i != L.end();)
    {
        Obstacles* u = *i;
        u->draw();
        u->move();


        if (collision(u, S, z))
        {
            crash = true;
            S->destroy();

        }

        if (u->delete_obstacle())
        {
            delete u;
            u = nullptr;
            i = L.erase(i);
        }
        else
            ++i;
    }

    if (!crash)
    {
        S->draw();
        S->move();
    }
}


// creates new objects
void Objects::createObstacles( )
{
    

    z = rand()%7;



    if (z == 0)
        L.emplace_back(new Spike());
    else if (z == 1)
        L.emplace_back(new DoubleSpike());
    else if (z == 2)
        L.emplace_back(new TripleSpike());
    else if (z == 3)
    {
        L.emplace_back(new HangingBase2());
    }
    else if (z == 4)
    {
        L.emplace_back(new BlockSpike());
    }
    else if (z == 5)
    {
        L.emplace_back(new DoubleSpike());
        L.emplace_back(new SpikeDSpike());
        L.emplace_back(new SpikeDSpike2());
    }
    else if (z == 6)
    {
        L.emplace_back(new HangingBase2());
        L.emplace_back(new JumpDJump());
        L.emplace_back(new JumpDJump2());
    }
    else{
        L.emplace_back(new HangingBase());
    }
    
    Prev = L.back();
}

void Objects::createEssentials()
{
    S = new Sprite();
    starting_x = S->getMoverRect().x;
    starting_y = S->getMoverRect().y;
    base = new platform();
}

bool Objects::collision(Obstacles *u, Sprite *S, int x) const
{
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h;

    if (x == 0 || x == 1 || x == 2 || x == 5)
    {
        int Spike_front = u->getMoverRect().x;
        int Spike_back = u->getMoverRect().x + u->getMoverRect().w;
        int Spike_height = u->getMoverRect().y;
        
        return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
        (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height));
        
    }
    else if (x == 4)
    {
        Obstacles* hanging = L[0];
        int ceiling = hanging->getMoverRect().y;
        int hanging_front = hanging->getMoverRect().x;
        int hanging_back = hanging->getMoverRect().x + hanging->getMoverRect().w;
        
        //std::cout << Sprite_top << ", " << ceiling << std::endl;

        if (Sprite_top <= ceiling+35 && Sprite_back <= hanging_back && Sprite_front >= hanging_front)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else if (x == 6)
    {
        Obstacles* first = L[0];
        int first_front = first->getMoverRect().x;
        int first_back = first->getMoverRect().x + first->getMoverRect().w;
        int first_height = first->getMoverRect().y;
        if (((first_front <= Sprite_back && first_front >= Sprite_front) ||
        (first_back <= Sprite_back && first_back >= Sprite_front)) && (Sprite_height >= first_height))
        {
            return true;
        }
        else{
            Obstacles* second = L[1];
            int ceiling = second->getMoverRect().y;
            int second_front = second->getMoverRect().x;
            int second_back = second->getMoverRect().x + second->getMoverRect().w;
            if (Sprite_top <= ceiling && Sprite_front >= second_front && Sprite_back <= second_back)
            {
                return true;
            }
            else{          
                Obstacles* third = L[2];
                int third_front = third->getMoverRect().x;
                int third_back = third->getMoverRect().x + third->getMoverRect().w;
                int third_height = third->getMoverRect().y;
                if (((third_front <= Sprite_back && third_front >= Sprite_front) || (third_back <= Sprite_back && third_back >= Sprite_front)) && (Sprite_height >= third_height))
                {
                    return true;
                }
                else{
                    return false;
                }
            }
        }

    }

    else if (x == 7)
    {
        Obstacles* hanging = L[0];
        int ceiling = hanging->getMoverRect().y;
        int hanging_front = hanging->getMoverRect().x;
        int hanging_back = hanging->getMoverRect().x + hanging->getMoverRect().w;
        if (Sprite_top <= ceiling+35 && Sprite_back <= hanging_back && Sprite_front >= hanging_front)
        {
            return true;
        }
        else{
            Obstacles* spike = L[1];
            int Spike_front = spike->getMoverRect().x;
            int Spike_back = spike->getMoverRect().x + spike->getMoverRect().w;
            int Spike_height = spike->getMoverRect().y;
            if (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
            (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) && (Sprite_height >= Spike_height))
            {
                return true;
            }
            else{
                Obstacles* hanging2 = L[2];
                int ceiling2 = hanging2->getMoverRect().y;
                int hanging_front2 = hanging2->getMoverRect().x;
                int hanging_back2 = hanging2->getMoverRect().x + hanging2->getMoverRect().w;
                if (Sprite_top <= ceiling2+35 && Sprite_back <= hanging_back2 && Sprite_front >= hanging_front2)
                {
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
    // else if (x == 9)
    // {

    // }

    else{
        return false;
    }
}

void Objects::update(SDL_Event& e)
{
    if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE && !flag)
    {
        if (!flag)
        {
            //std::cout << "Going up apparently" << std::endl;
            velocity = -jumpVelocity;
            flag = true;
        }
    }

    if (flag)
    {
        
        SDL_Rect& obstacleRect = S->getMoverRect();
        //std::cout << "up " << obstacleRect.y << std::endl;
        velocity += gravity;
        obstacleRect.y += velocity;
        //std::cout << "down " << obstacleRect.y << std::endl;
        //check if the object is on the platform

        if (obstacleRect.y >= starting_y)
        {
            obstacleRect.y = starting_y;
            velocity = 0;
            flag = false;
        }
    }
}

bool Objects::addObstacle() const
{
    if (Prev)
        return (Prev->getMoverRect().x <= S->getMoverRect().x + S->getMoverRect().w);
    return true;
}

bool Objects::EndGame() const
{
    return crash;
}
