// #include<SDL.h>
#include "drawing.hpp"
#include "Obstacles.hpp"
#include <iostream>

class Sprite : public Obstacles
{
public:
    void move();
    Sprite();
    void destroy();
    // may add other overloaded constructors here...
};