#include "game.hpp"
#include <iostream>

SDL_Renderer *Drawing::gRenderer = NULL;
SDL_Texture *Drawing::assets = NULL;
SDL_Texture *Drawing::ground = NULL;

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
	currentState = MENU;

	bool success = true;

	Drawing::assets = loadTexture("new_asset.png");
	gTexture = loadTexture("new_bg.png");

	// mainMenuImage= loadTexture("Menu.png");
	mainMenuImage = loadTexture("./Menu.png");
	GameoverImage = loadTexture("./GameOver.png");

	// Drawing::obstacles = loadTexture("FakeSpike03.png");
	Drawing::ground = loadTexture("platform.png");
	if (Drawing::assets == NULL || gTexture == NULL || Drawing::ground == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}
	// initialize the music of the MENU state
	LoadMusic("Main Menu.mp3");
	
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
	bool playStateInitialized = false;
	SDL_Event e;

	Uint32 current_time = SDL_GetTicks();
	currentState = MENU; // initialize the current state as MENU
	while (!quit)
	{

		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
				quit = true;

			switch (currentState)
			{
			case MENU:
				if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN) // should change the state with ENTER key
				{
					SDL_Delay(100);
					currentState = PLAY;
					changeMusic("Back On Track.mp3");

			
				
					obj.createEssentials(); // making all the objects
					
					
				}

				break;

			case PLAY:
				obj.update(e); // update function is making a projectile of the vertical movement

				if (obj.addObstacle())
					obj.createObstacles();

               
				break;
			case FINAL:
                if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN) // restart the game on Enter key press after reaching FINAL state
                {
                    currentState = MENU;
                    changeMusic("Main Menu.mp3");
                    playStateInitialized = false; // reset play state initialization
                }
                break;

			

				// we don't need to use final case here as it is not needed.We are using it below
			}
		}

		SDL_RenderClear(Drawing::gRenderer);

		// Draw based on the current state
		switch (currentState)
		{
		case MENU:
			SDL_RenderCopy(Drawing::gRenderer, mainMenuImage, NULL, NULL);
			break;

		case PLAY:
			SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL);

			obj.drawObjects();
			obj.update(e); // we are calling the a function for projectile motion of the vertical movement
			if (obj.addObstacle())
				obj.createObstacles();

			if (obj.EndGame()) // this condition is for checking the collision for the cube to change states
			{
				currentState = FINAL;
				changeMusic("Final Music.mp3");
				
				obj.reset();
			}
			break;

		case FINAL:
			SDL_RenderCopy(Drawing::gRenderer, GameoverImage, NULL, NULL); // displays the final image game
		}

		SDL_RenderPresent(Drawing::gRenderer); // displays the updated renderer

		SDL_Delay(100); // causes sdl engine to delay for specified miliseconds
	}
}

void Game::changeMusic(const std::string &musicPath)
{
	// Stop the currently playing music
	Mix_HaltMusic();
	// Load the new music
	Mix_Music *GameMusic = Mix_LoadMUS(musicPath.c_str());
	if (GameMusic == NULL)
		printf("Unable to load new music: %s\n", Mix_GetError());
	else
		Mix_PlayMusic(GameMusic, -1);
}

void Game::LoadMusic(const std::string &musicPath){
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
	Mix_HaltMusic();
	// Load the new music
	Mix_Music *GameMusic = Mix_LoadMUS(musicPath.c_str());
	if (GameMusic == NULL)
		printf("Unable to load new music: %s\n", Mix_GetError());
	else
		Mix_PlayMusic(GameMusic, -1);
}

