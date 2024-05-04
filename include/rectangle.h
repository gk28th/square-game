#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <citro2d.h>
#include <iostream>
#include "square.h"

inline int length = 50;
inline int by = 0;
inline int bx = 350;
inline bool down = true;

void rectMove();
void gameOver();
void resetRect();

#endif