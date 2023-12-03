#include "drawing.hpp"
#include "Obstacles.hpp"

class stairs3 : public Obstacles
{
    public:
        stairs3(int x = 1000, int w = 35);
        bool collision(Sprite *S) const;
};