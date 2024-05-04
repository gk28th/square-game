#include "rectangle.h"

void resetRect()
{
	bx = 350;
	by = 0;
	length = 50;
	down = true;
}
void gameOver()
{
	if(square.x+square.size >= bx && (square.x<=bx+50))
	{	
		if(down && (square.y <= length))
		{
			sleep(1);
			resetRect();
			resetSquare(square);
		} 
		if(!down && (square.y+square.size>=240-length)) 
		{
			sleep(1);
			resetRect();
			resetSquare(square);
    	}	
	}	
}
void rectMove()
{
	if(!(bx <= -50)) 
	{	
		bx=bx-4;
	}		
	else 
	{
		bx = 350;
		length = rand() % 120 + 50;
		if (!down) by = 0;
		if (down) by = 240 - length;
		down = !down;
	}
}