#include <iostream>
#include <SDL2/SDL.h>

#include "engine.hpp"

const unsigned WIDTH = 800;
const unsigned HEIGHT = 600;

int main(int argv, char **args)
{

    // TODO: 4/22/2023 Where is this being printed?
    std::cout << "hello world" << std::endl;

    Engine gameEngine = Engine();

    bool isRunning = true;
    SDL_Event event;

    while (isRunning)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                isRunning = false;
                break;

            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_ESCAPE)
                {
                    isRunning = false;
                }
            }
        }

        gameEngine.drawIteration();
    }

    // SDL_Init(SDL_INIT_EVERYTHING);

    // SDL_Window *window = SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
    // SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    // bool isRunning = true;
    // SDL_Event event;

    // while (isRunning)
    // {
    //     while (SDL_PollEvent(&event))
    //     {
    //         switch (event.type)
    //         {
    //         case SDL_QUIT:
    //             isRunning = false;
    //             break;

    //         case SDL_KEYDOWN:
    //             if (event.key.keysym.sym == SDLK_ESCAPE)
    //             {
    //                 isRunning = false;
    //             }
    //         }
    //     }

    //     SDL_RenderClear(renderer);
    //     SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

    //     SDL_RenderPresent(renderer);
    // }

    // SDL_DestroyRenderer(renderer);
    // SDL_DestroyWindow(window);
    // SDL_Quit();

    return 0;
}
