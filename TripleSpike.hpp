//Triple Spike

#include "drawing.hpp"
#include "Obstacles.hpp"

class TripleSpike : public Obstacles
{
    public:
        TripleSpike();
        bool collision(Sprite *S) const;
};