#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event) {
    if (SDL_QUIT == Event->type){
        Running = false;
    }
}
