//Purple base with hanging

#include "drawing.hpp"
#include "Obstacles.hpp"

class BlockSpike : public Obstacles
{
    public:
        BlockSpike();  
        bool collision (Sprite* S) const;
};