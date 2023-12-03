#include "drawing.hpp"
#include "Obstacles.hpp"

class stairs1 : public Obstacles
{
    public:
        stairs1(int x = 1000, int w = 35);
        bool collision(Sprite *S) const;
};