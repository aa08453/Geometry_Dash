#include "game.hpp"
#include <iostream>

SDL_Renderer *Drawing::gRenderer = NULL;
SDL_Texture *Drawing::assets = NULL;
SDL_Texture *Drawing::ground = NULL;
	// currentState=MENU;

//SDL_Texture *Drawing::obstacles = NULL;
bool Game::init()
{
	// Initialization 
	
	bool success = true;
	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		// Set texture filtering to linear
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			printf("Warning: Linear texture filtering not enabled!");
		}

		// Create window
		gWindow = SDL_CreateWindow("Geometry Dash", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else
		{
			// Create renderer for window
			Drawing::gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (Drawing::gRenderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else
			{
				// Initialize renderer color
				SDL_SetRenderDrawColor(Drawing::gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				// Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}

				// Initializing the mixer
				int init_2 = Mix_Init(MIX_INIT_MP3);
			}
		}
	}

	return success;
}

bool Game::loadMedia()
{
	// Loading success flag
	currentState=MENU;

	bool success = true;
    
	Drawing::assets = loadTexture("new_asset.png");
	gTexture = loadTexture("new_bg.png");

	// mainMenuImage= loadTexture("Menu.png");
	mainMenuImage = loadTexture("./Menu.png");

	//Drawing::obstacles = loadTexture("FakeSpike03.png");
	Drawing::ground = loadTexture("platform.png");
	if (Drawing::assets == NULL || gTexture == NULL  || Drawing::ground == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}

	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
	Mix_Music *music = Mix_LoadMUS("Main Menu.mp3");
	// Mix_Music *music1= Mix_LoadMUS("Main Menu.mp3");
	if (music == NULL)
	{
		printf("Unable to load music: %s\n", Mix_GetError());
		success = false;
	}

	Mix_PlayMusic(music, -1);

	return success;
}

void Game::close()
{
	// Free loaded images
	SDL_DestroyTexture(Drawing::assets);
	Drawing::assets = NULL;
	SDL_DestroyTexture(Drawing::ground);
	Drawing::ground = NULL;
	SDL_DestroyTexture(gTexture);
	SDL_DestroyTexture(mainMenuImage);

	Mix_Music *music = NULL;
	// Destroy window
	SDL_DestroyRenderer(Drawing::gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	Drawing::gRenderer = NULL;

	IMG_Quit();
	SDL_Quit();
}

SDL_Texture *Game::loadTexture(std::string path)
{
	// The final texture
	SDL_Texture *newTexture = NULL;

	// Load image at specified path
	SDL_Surface *loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		// Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(Drawing::gRenderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		// Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}
void Game::run()
{
	bool quit = false;
	SDL_Event e;
	Objects obj;

	currentState=MENU;
	// while(true)
	// {
	// 	bool quit = false;
	// 	int x = rand()%4;
	while (!quit)
	{
		// Handle events on queue
		
		
		while (SDL_PollEvent(&e) != 0)
		{
			// User requests quit
			// int x = rand()%4;
			// std::cout << x << std::endl;
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}

			switch (currentState)
			{
			case MENU:
				
				if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN)
				{
				currentState = PLAY; // Change to the play state when the Enter key is pressed
				changeMusic("NewMusic.mp3");
				
				obj.createObject();
				}
				break;

			case PLAY:
				
			
					
				if (e.key.keysym.sym == SDLK_UP)
				{
					obj.moveup();
				}
					//
				// else if (e.type == SDL_KEYUP)
					// {
					// 	if (e.key.keysym.sym == SDLK_UP)
					// 	{
					// 		obj.movedown();
					// 	}
					// }

				break;
			}
		}

		SDL_RenderClear(Drawing::gRenderer);
		// Draw based on the current state
		switch (currentState)
		{
		case MENU:
			// Draw your menu here
			// SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL);
			// obj.drawObjects();
			SDL_RenderCopy(Drawing::gRenderer, mainMenuImage, NULL, NULL);
			
			break;

		case PLAY:
			SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL);
			

			
			obj.drawObjects();
			// bool check = obj.status;
			// if (check)
			// {
			// 	std::cout<<check<<std::endl;
			// 	quit = true;
			// }
			break;
		}
		

		//****************************************************************
		SDL_RenderPresent(Drawing::gRenderer); // displays the updated renderer
		
		SDL_Delay(100); // causes sdl engine to delay for specified miliseconds
	}
	

}

void Game::changeMusic(const std::string& musicPath)
{
    // Stop the currently playing music
    Mix_HaltMusic();
    // Load the new music
    Mix_Music *GameMusic = Mix_LoadMUS("Stereo Madness.mp3");
    if (GameMusic == NULL)
    {
        printf("Unable to load new music: %s\n", Mix_GetError());
    }
    else
    {
        // P
        Mix_PlayMusic(GameMusic, -1);
    }
}

