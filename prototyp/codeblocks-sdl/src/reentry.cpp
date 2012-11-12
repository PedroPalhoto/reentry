#include "reentry.h"

reentry::reentry() {
    m_surf_display = NULL;
    m_running = true;
}

int reentry::OnExecute() {
    if (false == OnInit()) return -1;

    SDL_Event Event;
    while (m_running) {
        while (SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }
        OnLoop();
        OnRender();
    }
    OnCleanup();

    return 0;
}

reentry::~reentry() {
}

int main(int argc, char* argv[]) {
    reentry ReentryApp;
    return ReentryApp.OnExecute();
}
