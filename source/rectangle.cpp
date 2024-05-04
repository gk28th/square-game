#include "rectangle.h"

void resetRect()
{
	bx = 350;
	by = 0;
	length = 50;
	down = true;
}

void rectSpawn()
{
    if((x+50 >= bx) && (x+50 <= bx+50))
	{	
		if(down && (y <= length))
		{
			sleep(1);
			resetRect();
			resetSquare();
		} 
		if(!down && (y+50 >= 240-length)) 
		{
			sleep(1);
			resetRect();
			resetSquare();
    	}	
	}	
	
	if(!(bx <= -50)) 
	{	
		bx=bx-3;
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