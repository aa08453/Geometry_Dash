#include "JumpDJump2.hpp"
#include <iostream>

JumpDJump2::JumpDJump2()
{
    srcRect = {240, 720, 339, 290};
    moverRect = {1520, 267, 250, 105};
}

bool JumpDJump2::collision(Sprite* S) const
{
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h;
    int ceiling2 = moverRect.y;
    int hanging_front2 = moverRect.x;
    int hanging_back2 = moverRect.x + moverRect.w;
    return (Sprite_top <= ceiling2 + 35 && Sprite_back <= hanging_back2 && Sprite_front >= hanging_front2);
}  