#include "drawing.hpp"
#include "Obstacles.hpp"

class stairs2 : public Obstacles
{
    public:
        stairs2(int x = 1000, int w = 35);
        bool collision(Sprite *S) const;
};