#ifndef SQUARE_H
#define SQUARE_H

#include <citro2d.h>
#include <iostream>

struct Square
{
    int size = 50;
    int x;
    int y;
};

inline Square square;
void moveSquare();
void resetSquare(Square&);
void vertSet(Square&);

#endif