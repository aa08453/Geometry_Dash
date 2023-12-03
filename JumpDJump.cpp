#include "JumpDJump.hpp"

#include <iostream>

// Constructor for the JumpDJump class
JumpDJump::JumpDJump()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {2311, 593, 71, 133};
    
    // Initialize the mover rectangle for the JumpDJump object
    // Positioned at (1400, 370) with a width of 35 and height of 50
    moverRect = {1400, 370, 35, 50};
}

// Function to check collision between the JumpDJump object and a Sprite
bool JumpDJump::collision(Sprite* S) const
{
    // Extract coordinates and dimensions for collision detection
    int Sprite_front = S->getMoverRect().x; // Sprite's front x-coordinate
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's back x-coordinate + width
    int Sprite_top = S->getMoverRect().y - S->getMoverRect().h; // Sprite's top y-coordinate
    int Sprite_height = S->getMoverRect().y; // Sprite's bottom y-coordinate (height)
    int Spike_front = moverRect.x; // JumpDJump's x-coordinate
    int Spike_back = moverRect.x + moverRect.w; // JumpDJump's x-coordinate + width
    int Spike_height = moverRect.y; // JumpDJump's y-coordinate (height)

    // Check if there is a collision between the JumpDJump and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}


