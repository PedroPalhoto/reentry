#ifndef REENTRY_H
#define REENTRY_H

#include <SDL.h>
#include <SDL_image.h>

const int    DEFAULT_SCREEN_WIDTH     = 320;
const int    DEFAULT_SCREEN_HEIGHT    = 200;
const int    DEFAULT_SCREEN_BPP       = 8;
const Uint32 DEFAULT_SCREEN_SDL_FLAGS = SDL_HWSURFACE | SDL_DOUBLEBUF /*| SDL_FULLSCREEN*/;

class reentry {
    private:
        bool         m_running;
        SDL_Surface* m_surf_display;

    public:
        reentry();
        virtual ~reentry();

        bool OnInit();
        int  OnExecute();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();

    protected:
};

#endif // REENTRY_H
