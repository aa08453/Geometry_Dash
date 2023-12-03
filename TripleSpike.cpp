
#include "TripleSpike.hpp"

#include <iostream>

// Constructor for the TripleSpike class
TripleSpike::TripleSpike()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {149, 477, 178, 59};
    
    // Initialize the mover rectangle for the TripleSpike object
    // Positioned at (1000, 385) with a width of 95 and height of 35
    moverRect = {1000, 385, 95, 35};
}

// Function to check collision between the TripleSpike object and a Sprite
bool TripleSpike::collision(Sprite *S) const
{
    // Extract coordinates and dimensions for collision detection
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;

    // Check if there is a collision between the TripleSpike and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}

