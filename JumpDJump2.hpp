#include "drawing.hpp"
#include "Obstacles.hpp"

class JumpDJump2 : public Obstacles
{
    public:
        JumpDJump2();
        bool collision(Sprite *S) const;
};