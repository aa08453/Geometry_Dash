
#include "Spike.hpp"

// Constructor for the Spike class
// Takes x and w parameters to specify position and width
Spike::Spike(int x, int w)
{
    // Initialize the source rectangle for texture mapping
    srcRect = {144, 113, 59, 59};
    
    // Initialize the mover rectangle for the Spike object
    // Positioned at x with a y-coordinate of 385, and a width of w and height of 35
    moverRect = {x, 385, w, 35};
}

// Function to check collision between the Spike object and a Sprite
bool Spike::collision(Sprite* S) const
{
    // Extract coordinates and dimensions for collision detection
    int Spike_front = moverRect.x; // Spike's x-coordinate
    int Spike_back = moverRect.x + moverRect.w; // Spike's x-coordinate + width
    int Sprite_back = S->getMoverRect().x + S->getMoverRect().w; // Sprite's x-coordinate + width
    int Sprite_front = S->getMoverRect().x; // Sprite's x-coordinate
    int Sprite_height = S->getMoverRect().y; // Sprite's y-coordinate (height)
    int Spike_height = moverRect.y; // Spike's y-coordinate (height)

    // Check if there is a collision between the Spike and the Sprite
    return (((Spike_front <= Sprite_back && Spike_front >= Sprite_front) ||
             (Spike_back <= Sprite_back && Spike_back >= Sprite_front)) &&
            (Sprite_height >= Spike_height));
}


