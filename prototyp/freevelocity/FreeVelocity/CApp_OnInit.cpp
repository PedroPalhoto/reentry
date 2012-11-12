#include "CApp.h"

bool CApp::OnInit() {
    if (0 > SDL_Init(SDL_INIT_EVERYTHING)) {
        return false;
    }

    if (NULL == (Surf_Display = SDL_SetVideoMode(640, 480, 8, SDL_HWSURFACE | SDL_DOUBLEBUF))) {
        return false;
    }

    return true;
}
