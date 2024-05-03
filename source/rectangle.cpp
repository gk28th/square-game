#include "rectangle.h"

void resetRect()
{
	bx = 350;
	by = 0;
	length = 50;
	up = true;
}

void rectSpawn()
{
    if((x+50 >= bx) && (x+50 <= bx+50))
	{	
		if(up && (y <= length))
		{
			sleep(1);
			resetRect();
			resetSquare();
		} 
		if(!up && (y+50 >= 240-length)) 
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
		if (!up) by = 0;
		if (up) by = 240 - length;
		up = !up;
	}
}