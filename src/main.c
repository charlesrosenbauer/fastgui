#include "SDL/SDL.h"


int main(){
	SDL_Init(SDL_INIT_EVERYTHING);
	
	// Make this resizeable at some point
	SDL_Surface* screen = SDL_SetVideoMode(1280, 720, 32, 0);
	
	
	int cont = 1;
	while(cont){
	
		SDL_Event e;
		while(SDL_PollEvent(&e)){
			if(e.type == SDL_QUIT) cont = 0;
		}
	}
	
	SDL_Quit();
}
