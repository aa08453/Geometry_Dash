
#include "SpikeDSpike2.hpp"


#include <iostream>

// Constructor for the SpikeDSpike2 class
SpikeDSpike2::SpikeDSpike2()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {166, 301, 118, 59};
    
    // Initialize the mover rectangle for the SpikeDSpike2 object
    // Positioned at (1350, 385) with a width of 59 and height of 35
    moverRect = {1275, 385, 59, 35};
}

// Function to check collision between the SpikeDSpike2 object and a Sprite
bool SpikeDSpike2::collision(Sprite *S) const
{
    // Extract coordinates and dimensions for collision detection
    int Spike_front = moverRect.x; // SpikeDSpike2's x-coordinate
    int Spike_back = moverRect.x + moverRect.w; // SpikeDSpike2's x-coordinate + width
    int Sprite_front = S->getMoverRect().x; // Sprite's x-coordinate
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's x-coordinate + width
    int Sprite_height = S->getMoverRect().y; // Sprite's y-coordinate (height)
    int Spike_height = moverRect.y; // SpikeDSpike2's y-coordinate (height)

    // Check if there is a collision between the SpikeDSpike2 and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}

