#include "square.h" 

void resetSquare()
{
	x = 0;
	y = 0;
}

void moveSquare()
{
	hidScanInput();
	u32 kHeld = hidKeysHeld();
	if((kHeld & KEY_DUP) && (y != 0)) y=y-2;	
	if((kHeld & KEY_DDOWN) && (y != 190)) y=y+2;  	
	if((kHeld & KEY_DLEFT) && (x != 0)) x=x-2;
	if((kHeld & KEY_DRIGHT) && (x != 350))	x=x+2;
}