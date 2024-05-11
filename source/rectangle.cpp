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
	if((sqrX+sqrSize >= bx && sqrX+sqrSize <= bx+thickness) || sqrX == bx+thickness)//|| sqrY >= by
	{	
		if(down && (sqrY <= length))
		{
			sleep(1);
			resetRect();
			resetSquare();
		} 
		if(!down && (sqrY+sqrSize>=240-length)) 
		{
			sleep(1);
			resetRect();
			resetSquare();
    	}	
	}	
}
void rectMove()
{
	if(!(bx <= 0-thickness)) 
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