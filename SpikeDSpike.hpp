#include "drawing.hpp"
#include "Obstacles.hpp"

class SpikeDSpike : public Obstacles
{
    public:
        SpikeDSpike();
        bool collision(Sprite *S) const;
};