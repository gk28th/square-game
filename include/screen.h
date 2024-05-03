#ifndef SCREEN_H
#define SCREEN_H

#include <citro2d.h>
#include <iostream>
#include "square.h"
#include "rectangle.h"

inline C3D_RenderTarget* top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);

void drawFrame();
void sceneInit();

#endif