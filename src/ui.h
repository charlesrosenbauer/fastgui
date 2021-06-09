#ifndef __UI_HEADER__
#define __UI_HEADER__


#include "stdint.h"

#include "SDL/SDL.h"



typedef struct{
	SDL_Surface *screen, *tiles;
}Gfx;


typedef struct{
	int      x, y, h, w, framewidth;
	uint32_t color, framecolor;
}Box;

typedef struct{
	
}Widget_Textbox;

typedef struct{
	
}Widget_Button;

typedef struct{
	
}Widget_Frame;

void drawBox(Gfx, Box);









#endif
