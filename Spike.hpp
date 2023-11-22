//#include <SDL.h>
//#include "Objects.hpp"
#include "drawing.hpp"
#include "Obstacles.hpp"

class Spike : public Obstacles
{
public:
    void move();
    Spike();
    Spike(int x);
    // may add other overloaded constructors here...
};