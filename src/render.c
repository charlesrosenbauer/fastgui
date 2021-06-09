#include "SDL/SDL.h"

#include "ui.h"



void drawBox(Gfx g, Box b){
	int      n = b.framewidth;
	SDL_Rect r = (SDL_Rect){b.x+n, b.y+n, b.w-n, b.h-n};
	if(b.color & 0xff000000)
		SDL_FillRect(g.screen, &r, b.color);
	if(!n) return;
	r = (SDL_Rect){b.x, b.y, b.w, n};
	SDL_FillRect(g.screen, &r, b.framecolor);
	r = (SDL_Rect){b.x, b.y+b.h-n, b.w, n};
	SDL_FillRect(g.screen, &r, b.framecolor);
	r = (SDL_Rect){b.x, b.y, n, b.h};
	SDL_FillRect(g.screen, &r, b.framecolor);
	r = (SDL_Rect){b.x+b.w-n, b.y, n, b.h};
	SDL_FillRect(g.screen, &r, b.framecolor);
}
