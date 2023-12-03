#include "drawing.hpp"
#include "Obstacles.hpp"

class FourSpikes1 : public Obstacles
{
    public:
        FourSpikes1();
        bool collision(Sprite *S) const;
};