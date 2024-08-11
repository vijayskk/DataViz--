#include <SDL2/SDL.h>
#include "../lib/defenitions.h"



void drawAxes(SDL_Renderer * renderer){
    SDL_SetRenderDrawColor(renderer,BLACK);
    SDL_RenderDrawLine(renderer,PADDING,DISPLAY_HEIGHT-PADDING,DISPLAY_WIDTH-PADDING,DISPLAY_HEIGHT-PADDING);
    SDL_RenderDrawLine(renderer,PADDING,PADDING,PADDING,DISPLAY_HEIGHT-PADDING);
}

void drawIndices(int maxXvalue,int maxYvalue,SDL_Renderer * renderer,int clampOffset){
    SDL_RenderDrawLine(renderer,PADDING,DISPLAY_HEIGHT-PADDING - clampOffset * ((DISPLAY_HEIGHT-PADDING*2)/maxYvalue),DISPLAY_WIDTH-PADDING,DISPLAY_HEIGHT-PADDING - clampOffset * ((DISPLAY_HEIGHT-PADDING*2)/maxYvalue));

    for (int i = PADDING; i <= DISPLAY_WIDTH - PADDING; i+= (DISPLAY_WIDTH-PADDING * 2)/(maxXvalue))
    {
        SDL_RenderDrawLine(renderer,i,DISPLAY_HEIGHT-PADDING,i,DISPLAY_HEIGHT-PADDING + INDEXLINEHEIGHT);
    }
    
    for (int i = DISPLAY_HEIGHT - PADDING; i >= PADDING; i-= (DISPLAY_HEIGHT-PADDING * 2)/(maxYvalue))
    {
        SDL_RenderDrawLine(renderer,PADDING-INDEXLINEHEIGHT,i,PADDING,i);
    }
}

void drawDot(int centerX, int centerY,SDL_Renderer* renderer, int radius) {
    
    radius/=2;
    for (int w = 0; w < radius * 2; w++) {
        for (int h = 0; h < radius * 2; h++) {
            int dx = radius - w;  // horizontal offset
            int dy = radius - h;  // vertical offset
            if ((dx*dx + dy*dy) <= (radius * radius)) {
                SDL_RenderDrawPoint(renderer, centerX + dx, centerY + dy);
            }
        }
    }
}

