#include "drawing.hpp"
#include "Obstacles.hpp"

class FourSpikes2 : public Obstacles
{
    public:
        FourSpikes2();
        bool collision(Sprite *S) const;
};