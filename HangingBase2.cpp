//Purple base with hanging

#include "HangingBase2.hpp"
#include <iostream>

HangingBase2::HangingBase2()
{
    srcRect = {240, 720, 339, 290};
    moverRect = {1060, 267, 250, 105};
}

bool HangingBase2::collision(Sprite *S) const
{
    // Extract coordinates and dimensions for collision detection
    int Sprite_front = S->getMoverRect().x;                      // Sprite's front x-coordinate
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's back x-coordinate + width
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h;  // Sprite's top y-coordinate
    int ceiling2 = moverRect.y;                                  // Ceiling for JumpDJump2
    int hanging_front2 = moverRect.x;                            // JumpDJump2's front x-coordinate
    int hanging_back2 = moverRect.x + moverRect.w;               // JumpDJump2's back x-coordinate + width

    // Check if there is a collision between the HangingBase2 and the Sprite
    return (Sprite_top <= ceiling2 + 35 && Sprite_back <= hanging_back2 && Sprite_front >= hanging_front2);
}
