#include "square.h" 

void resetSquare()
{
	sqrSize = 50;
	sqrX = 0;
	sqrY = 0;
}

void moveSquare()
{
	hidScanInput();
	u32 kHeld = hidKeysHeld();
	if((kHeld & KEY_DUP) && (sqrY != 0)) sqrY -= 2;
	if((kHeld & KEY_DDOWN) && (sqrY != 190)) sqrY += 2;
	if((kHeld & KEY_DLEFT) && (sqrX != 0)) sqrX -= 2;
	if((kHeld & KEY_DRIGHT) && (sqrX != 350)) sqrX += 2;	
}