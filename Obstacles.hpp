#include "drawing.hpp"
#pragma once
class Obstacles
{
protected:
   
    int frame = 0;
    SDL_Rect srcRect, moverRect; // supposed to be protected

public:
    void draw();

    SDL_Rect& getMoverRect() {
        return moverRect;
    }

    //virtual void fly();

    virtual void move();
    const int& get_position(char a) const;
    

};