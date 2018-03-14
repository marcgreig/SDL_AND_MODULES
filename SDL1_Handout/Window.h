#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

#include "Module.h"
#include "SDL/include/SDL.h"
#include "Module.h"
#include "Globals.h"

class Application;

class ModuleWindow : public Module
{

public:
	//The window we'll be rendering to
	SDL_Window * window;


public:

	ModuleWindow() {};
	~ModuleWindow() {};

	// Called before quitting
	bool Init() {
		
		LOG("Init SDL window & surface");
		bool ret = true;

		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			LOG("SDL_VIDEO could not initialize! SDL_Error: %s\n", SDL_GetError());
			ret = false;
		}
		else {
			SDL_Window* window = SDL_CreateWindow("window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 800, 0);

		}
		return ret;
	}

	// Called before quitting
	bool CleanUp() {
		SDL_DestroyWindow(window);
	}

};

#endif // __ModuleWindow_H__