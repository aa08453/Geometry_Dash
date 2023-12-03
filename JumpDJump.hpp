#include "drawing.hpp"
#include "Obstacles.hpp"

class JumpDJump : public Obstacles
{
    public:
        JumpDJump();
        bool collision(Sprite *S) const;
};