#include "Sprite.hpp"

Sprite::Sprite()
{
    
    srcRect = {291, 0, 128, 124}; 
    moverRect = {375, 385, 35, 35};

}

void Sprite::move()
{
    
}

void Sprite::destroy()
{
    std::cout << "Destroying" << std::endl;
    moverRect = {2000,2000,35,35};
}
