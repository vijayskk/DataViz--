#include <SDL2/SDL.h>
#include "../lib/defenitions.h"
#include "helpers.h"
#include "drawAxes.h"

void stem(int * data,int datalen,SDL_Renderer * renderer,int clampOffset){
    drawAxes(renderer);

    int max = findMax(data,datalen);
    drawIndices(datalen,max,renderer,clampOffset);
    SDL_SetRenderDrawColor(renderer,BLUE);
    for (int i = 0; i < datalen; i++)
    {
        drawDot((i * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),DISPLAY_HEIGHT - (PADDING + data[i] * ((DISPLAY_HEIGHT-PADDING*2)/max)),renderer,10);
        SDL_RenderDrawLine(renderer,(i * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),DISPLAY_HEIGHT - (PADDING + data[i] * ((DISPLAY_HEIGHT-PADDING*2)/max)),(i * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),DISPLAY_HEIGHT-PADDING-(clampOffset * ((DISPLAY_HEIGHT-PADDING*2)/max)));
    }
    SDL_SetRenderDrawColor(renderer,BLACK);
}

void plot(int * data,int datalen,SDL_Renderer * renderer,int clampOffset){
    drawAxes(renderer);

    int max = findMax(data,datalen);
    drawIndices(datalen,max,renderer,clampOffset);
    SDL_SetRenderDrawColor(renderer,BLUE);
    for (int i = 0; i < datalen; i++)
    {
        drawDot((i * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),DISPLAY_HEIGHT - (PADDING + data[i] * ((DISPLAY_HEIGHT-PADDING*2)/max)),renderer,10);
        if (i != datalen-1)
        {
            SDL_RenderDrawLine(renderer,
            (i * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),
            DISPLAY_HEIGHT - (PADDING + data[i] * ((DISPLAY_HEIGHT-PADDING*2)/max)),
            ((i+1) * ((DISPLAY_WIDTH-PADDING*2)/datalen)+ PADDING),
            DISPLAY_HEIGHT - (PADDING + data[i+1] * ((DISPLAY_HEIGHT-PADDING*2)/max)));
        }
    }
    SDL_SetRenderDrawColor(renderer,BLACK);
}