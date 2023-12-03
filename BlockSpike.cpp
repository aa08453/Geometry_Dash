// Include the header file for the BlockSpike class
#include "BlockSpike.hpp"

// Include the necessary library for input and output operations
#include <iostream>

// Constructor for the BlockSpike class
BlockSpike::BlockSpike()
{
    // Initializing the source rectangle for texture mapping
    srcRect = {2311, 593, 71, 133};
    
    // Initializing the mover rectangle for the BlockSpike object
    // The object starts at position (1000, 370) with a size of (35, 50)
    moverRect = {1000, 370, 35, 50};
}



