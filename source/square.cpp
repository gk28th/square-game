#include "square.h" 

void resetSquare(Square &sqr)
{
	sqr.size = 50;
	sqr.x = 0;
	sqr.y = 0;
}
void moveSquare()
{
	hidScanInput();
	u32 kHeld = hidKeysHeld();
	if((kHeld & KEY_DUP) && (square.y != 0)) square.y = square.y - 2;
	if((kHeld & KEY_DDOWN) && (square.y != 190)) square.y = square.y + 2;
	if((kHeld & KEY_DLEFT) && (square.x != 0)) square.x = square.x - 2;
	if((kHeld & KEY_DRIGHT) && (square.x != 350))	square.x = square.x + 2;	
}