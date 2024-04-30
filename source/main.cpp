#include <citro2d.h>
#include <iostream>

inline int length = 50;
inline int by = 0;
inline int bx = 350;
inline int x = 0;
inline int y = 0;
inline bool up = true;
inline u32 kHeld;

void scanInput()
{
	hidScanInput();
	kHeld = hidKeysDown()
	if((kHeld & KEY_DUP) && (y != 0)) y=y-2;	
	if((kHeld & KEY_DDOWN) && (y != 190)) y=y+2;  	
	if((kHeld & KEY_DLEFT) && (x != 0)) x=x-2;
	if((kHeld & KEY_DRIGHT) && (x != 350))	x=x+2;
}
void drawFrame()
{
	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
	C2D_TargetClear(top, C2D_Color32(0, 0, 255, 255));
	C2D_SceneBegin(top);
	C2D_DrawRectSolid(x, y, 0, 50, 50, C2D_Color32(255, 0, 0, 255));
	C2D_DrawRectSolid(bx, by, 0, 50, length, C2D_Color32(255, 0, 0, 255));
	C3D_FrameEnd(0);
}

int main() 
{
	gfxInitDefault();
	C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
	C2D_Prepare();
	C3D_RenderTarget* top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
	
	while (aptMainLoop())
	{
		scanInput();
		drawFrame();		

		if(x+50 >= bx)
		{	
			if(up && (y <= length))
			{
			length = 50;
			by = 0;
			bx = 350;
			x = 0;
			y = 0;
			up = true;
			} 
			if(!up && (y+50 >= 240-length)) 
			{
			length = 50;
			by = 0;
			bx = 350;
			x = 0;
			y = 0;
			up = true;
			} 
		}
		if(!(bx <= -50)) 
		{	
			bx=bx-3;
			up = !up;
		}		
		else 
		{
			bx = 350;
			length = rand() % 120 + 50;
			if (up) by = 0;
			if (!up) by = 240 - length;
		}

	}

	C2D_Fini();
	C3D_Fini();
	gfxExit();
	return 0;
}
