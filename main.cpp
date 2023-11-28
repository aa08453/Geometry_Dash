#include "game.hpp"
#include <iostream>

int main(int argc, char *argv[]){
    Game game;
    const int FPS = 60;
    const int Frame_Delay = 1000 / FPS;
    Uint32 frame_start;
    srand(time(NULL));
    if( !game.init() ){
		printf( "Failed to initialize!\n" );
        return 0;
	}
    frame_start = SDL_GetTicks();
		//Load media
    if( !game.loadMedia() ){
        printf( "Failed to load media!\n" );
        return 0;
    }


    game.run();
    game.close();          
    int numKeys;
    const Uint8 *keyboardState = SDL_GetKeyboardState(&numKeys);

    // Check the state of the 'A' key (for example)
    if (keyboardState[SDL_SCANCODE_UP]) {
        // The 'A' key is pressed
        cout<<"A is pressed"<<endl;
    }

    return 0;
}