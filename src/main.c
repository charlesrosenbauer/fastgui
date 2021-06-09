#include "SDL/SDL.h"

#include "ui.h"


int main(){
	SDL_Init(SDL_INIT_EVERYTHING);
	
	// Make this resizeable at some point
	SDL_Surface* screen = SDL_SetVideoMode(1280, 720, 32, 0);
	
	Gfx g = (Gfx){screen, NULL};
	Box b = (Box){16, 16, 32, 96, 2, 0xff7f7f7f, 0xff3f3f3f};
	
	int cont = 1;
	while(cont){
		SDL_Event e;
		while(SDL_PollEvent(&e)){
			if(e.type == SDL_QUIT) cont = 0;
		}
		
		
		
		SDL_FillRect(screen, 0, 0);
		
		drawBox(g, b);
		
		
		SDL_Flip(screen);
		SDL_Delay(10);
	}
	
	SDL_Quit();
}
