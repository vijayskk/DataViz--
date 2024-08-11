#include <SDL2/SDL.h>
#include <iostream>
#include <stdlib.h>
#include "../lib/defenitions.h"
#include "../lib/plot.h"
#include "../lib/preprocessor.h"
using namespace std;


int main()
{
    SDL_Window * window = nullptr;
    SDL_Renderer * renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(DISPLAY_WIDTH * DISPLAY_SCALE,DISPLAY_HEIGHT * DISPLAY_SCALE,0,&window,&renderer);
    SDL_RenderSetScale(renderer,DISPLAY_SCALE,DISPLAY_SCALE);

    SDL_SetRenderDrawColor(renderer,BLACK);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer,WHITE);
    SDL_Rect bg = {0,0,DISPLAY_WIDTH,DISPLAY_HEIGHT};
    SDL_RenderFillRect(renderer,&bg);
    SDL_SetWindowTitle(window,"Plot");

    int clampoffset = 0;
    int predata[] = DATA;
    int datalen = sizeof(predata) / sizeof(int);
    int * data =(int * ) malloc(sizeof(int) * datalen);
    processData(predata,datalen,data,&clampoffset);
    plot(data,datalen,renderer,clampoffset);

    bool status = (renderer != nullptr && window != nullptr);
    if (!status)
    {
        cout<<"Initialization failed...\n";
        exit(1);
    }
    
    SDL_RenderPresent(renderer);

    SDL_Event e;
    bool quit = false;

    while (!quit)
    {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
    cout<<"Plot Closed...\n";
    
    return 0;
}
