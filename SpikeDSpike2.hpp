#include "drawing.hpp"
#include "Obstacles.hpp"

class SpikeDSpike2 : public Obstacles
{
    public:
        SpikeDSpike2();
        bool collision(Sprite *S) const;

};