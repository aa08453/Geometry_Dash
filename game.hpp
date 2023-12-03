#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <SDL_mixer.h>
#include "Objects.hpp"
#include "drawing.hpp"
#include "platform.hpp"

class Game
{
    public:
        bool init();
        bool loadMedia();
        void close();
        SDL_Texture *loadTexture(std::string path);
        void run();
        // void updateState();
        void changeMusic(const std::string& musicPath);
        void changeMusicF(const std::string& musicPath);

        

    private:
        // Screen dimension constants
        const int SCREEN_WIDTH = 1000;
        const int SCREEN_HEIGHT = 600;
        int  frameCounter;

        
        // The window we'll be rendering to
        SDL_Window *gWindow = NULL;
        Objects obj;
        

        // Current displayed texture
        SDL_Texture *gTexture = NULL;
        SDL_Texture *mainMenuImage = NULL;
        SDL_Texture *GameoverImage = NULL;

        // enum that contain the states of the game
        // till now implemented initial and game states
        enum GameState
        {
            MENU,
            PLAY,
            FINAL
        };

        GameState currentState;   //enum object
};
