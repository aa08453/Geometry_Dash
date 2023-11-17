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

    return 0;
}