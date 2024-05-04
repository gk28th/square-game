#include <citro2d.h>
#include <iostream>
#include "square.h"
#include "rectangle.h"
#include "screen.h"

int main() 
{
	sceneInit();
	
	while (aptMainLoop())
	{
		moveSquare();
		drawFrame();		
		gameOver();
		rectMove();
	}

	C2D_Fini();
	C3D_Fini();
	gfxExit();
	return 0;
}
