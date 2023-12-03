#include "Sprite.hpp"

// Constructor for the Sprite class
Sprite::Sprite()
{
    // Initialize the source rectangle for texture mapping
    srcRect = {338, 41, 128, 124}; 

    // Initialize the mover rectangle for the Sprite object
    // Positioned at (375, 385) with a width and height of 35
    moverRect = {375, 385, 35, 35};
}

// Function to draw the Sprite on the screen
void Sprite::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

// Function to destroy the Sprite by moving it to an off-screen position
void Sprite::destroy()
{
    // Move the Sprite to a position far off-screen, effectively hiding it
    moverRect = {-200000, 385, 35, 35};
}

// Function to get a reference to the mover rectangle of the Sprite
SDL_Rect& Sprite::getMoverRect()
{
    // Return a reference to the mover rectangle
    return moverRect;
}

