#include <iostream>
#include <SDL3/SDL.h>

int main(int argc, char** argv)
{

    SDL_Init(SDL_INIT_VIDEO);
    std::cout << "Hello world!" << std::endl;

    return EXIT_SUCCESS;
}