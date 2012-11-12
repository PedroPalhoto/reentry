#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#include <SDL.h>

class CApp {
    private:
        bool Running;
        SDL_Surface* Surf_Display;

    public:
        CApp();
        int OnExecute();

    public:
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();
};

#endif // CAPP_H_INCLUDED
