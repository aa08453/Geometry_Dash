
#include "JumpDJump2.hpp"


#include <iostream>

// Constructor for the JumpDJump2 class
JumpDJump2::JumpDJump2()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {240, 720, 339, 290};
    
    // Initialize the mover rectangle for the JumpDJump2 object
    // Positioned at (1520, 267) with a width of 250 and height of 105
    moverRect = {1520, 267, 250, 105};
}

// Function to check collision between the JumpDJump2 object and a Sprite
bool JumpDJump2::collision(Sprite* S) const
{
    // Extract coordinates and dimensions for collision detection
    int Sprite_front = S->getMoverRect().x; // Sprite's front x-coordinate
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's back x-coordinate + width
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h; // Sprite's top y-coordinate
    int ceiling2 = moverRect.y; // Ceiling for JumpDJump2
    int hanging_front2 = moverRect.x; // JumpDJump2's front x-coordinate
    int hanging_back2 = moverRect.x + moverRect.w; // JumpDJump2's back x-coordinate + width

    // Check if there is a collision between the JumpDJump2 and the Sprite
    return (Sprite_top <= ceiling2 + 35 && Sprite_back <= hanging_back2 && Sprite_front >= hanging_front2);
}


