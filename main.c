#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

int
main()
{
	SDL_Window *win;
	//SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

	win = SDL_CreateWindow("Una ventana",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		800, 600,
		0);

	SDL_Delay(600);

	SDL_DestroyWindow(win);
	win = NULL;

	SDL_Quit();

	return 0;
}
