
#include "DoubleSpike.hpp"

// Include the necessary library for input and output operations
#include <iostream>

// Constructor for the DoubleSpike class
// Takes x and w parameters to specify position and width
DoubleSpike::DoubleSpike(int x, int w)
{
    // Initialize the source rectangle for texture mapping
    srcRect = {166, 301, 118, 59};

    // Initialize the mover rectangle for the DoubleSpike object
    // Positioned at x with a y-coordinate of 385, and a width of w and height of 35
    moverRect = {x, 385, w, 35};
}

// Function to check collision between the DoubleSpike object and a Sprite
bool DoubleSpike::collision(Sprite* S) const
{
    // Extract coordinates and dimensions for collision detection
    int Spike_front = moverRect.x;
    int Spike_back = moverRect.x + moverRect.w;
    int Sprite_front = S->getMoverRect().x;
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w;
    int Sprite_height = S->getMoverRect().y;
    int Spike_height = moverRect.y;

    // Check if there is a collision between the DoubleSpike and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}


