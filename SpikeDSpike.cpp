#include "SpikeDSpike.hpp"
#include <iostream>

// Constructor for the SpikeDSpike class
SpikeDSpike::SpikeDSpike()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {1247, 673, 60, 118};
    
    // Initialize the mover rectangle for the SpikeDSpike object
    // Positioned at (1150, 315) with a width of 45 and height of 50
    moverRect = {1150, 315, 45, 50};
}

// Function to check collision between the SpikeDSpike object and a Sprite
bool SpikeDSpike::collision(Sprite *S) const
{
    // Extract coordinates and dimensions for collision detection
    int Spike_front = moverRect.x; // SpikeDSpike's x-coordinate
    int Spike_back = moverRect.x + moverRect.w; // SpikeDSpike's x-coordinate + width
    int Sprite_front = S->getMoverRect().x; // Sprite's x-coordinate
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's x-coordinate + width
    int Sprite_height = S->getMoverRect().y; // Sprite's y-coordinate (height)
    int Spike_height = moverRect.y; // SpikeDSpike's y-coordinate (height)

    // Check if there is a collision between the SpikeDSpike and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height <= Spike_height));
}

