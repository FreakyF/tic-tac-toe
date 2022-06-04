#ifndef TIC_TAC_TOE_WINDOW_MANAGEMENT_H
#define TIC_TAC_TOE_WINDOW_MANAGEMENT_H

#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>
#include <SDL_image.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int create_window();

bool keep_window_open(SDL_Window *window);

int close_window(SDL_Texture *tex, SDL_Renderer *rend, SDL_Window *window);

#endif //TIC_TAC_TOE_WINDOW_MANAGEMENT_H
