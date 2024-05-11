#include "screen.h"

void sceneInit()
{
    gfxInitDefault();
	C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
	C2D_Prepare();
	consoleInit(GFX_BOTTOM, NULL);
	srand(time(NULL));

}
void drawFrame()
{
	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
	C2D_TargetClear(top, C2D_Color32(0, 0, 255, 255));
	C2D_SceneBegin(top);
	C2D_DrawRectSolid(sqrX, sqrY, 0, sqrSize, sqrSize, C2D_Color32(255, 0, 0, 255));
	C2D_DrawRectSolid(bx, by, 0, thickness, length, C2D_Color32(255, 0, 0, 255));
	C3D_FrameEnd(0);
}