/*
 * reentry-sdl.c
 * 
 * Copyright 2012 Pedro Palhoto <COM GMAIL TA PALHOTO>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>

#define SCREEN_WIDTH    320
#define SCREEN_HEIGHT   200
#define SCREEN_BPP      8

int main(int argc, char **argv)
{
    SDL_Surface* splash = NULL;
    SDL_Surface* screen = NULL;

    SDL_Init(SDL_INIT_EVERYTHING);
    screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP,
                              SDL_SWSURFACE|SDL_FULLSCREEN);

    splash = IMG_Load("splash.png");
    SDL_BlitSurface(splash, NULL, screen, NULL);
    SDL_Flip(screen);

    SDL_Delay(3000);

    SDL_FreeSurface(splash);
    SDL_Quit();
    
    return 0;
}

