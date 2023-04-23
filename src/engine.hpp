#include <SDL2/SDL.h>

#ifndef Engine_H
#define Engine_H

class Engine
{
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    unsigned windowWidth;
    unsigned windowHeight;

public:
    Engine();

    void drawIteration();

    ~Engine();
};

#endif