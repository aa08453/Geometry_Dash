# Geometry Dash
## By Abdullah Amir, Muhammad Aqeel Mehdi, Ehzem Sheikh

## Overview
Geometry Dash is an endless runner platform game in which the player controls a cube shaped icon that runs for an infinite amount of time while avoiding obstacles. The player's objective is to survive for as long as possible. The game environment is created through procedural generation as obstacles appear randomly which can be avoiding by jumping  by over them.

## Instructions
In the initial or menu state of the game, pressing the "Enter" key will transition to the play state. In the play state, utilize the "Space" key for upward movement of the cube, controlling its actions within the game environment. In the event of a game over, exit the game. To play again, rerun the game , as the current implementation does not support an automatic loop back to the initial or menu state after reaching the game over state.

How to Run the Project:
Using Cmake:
Use these commands on your terminal
Things You have to do for the first time 
1) git clone https://github.com/aa08453/OOP_Project.git
2) Then make sure that you are in a directory of OOP_Project.You can use the following command:
cd OOP_Project
3) mkdir build
4) cd build
5)  cmake -G "MinGW Makefiles" ..
6)  mingw32-make
7)  .\main.exe

Using G++:

Use this command to run on terminal to compile:
g++ *.cpp -IC:\mingw_dev_lib\include\SDL2 -LC:\mingw_dev_lib\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -o a.exe

Then run the .\a.exe command to run the game

## Contributing

If you would like to contribute to this project, please submit a pull request.

