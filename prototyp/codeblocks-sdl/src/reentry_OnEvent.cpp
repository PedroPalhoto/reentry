#include <reentry.h>

void reentry::OnEvent(SDL_Event* Event) {
    if (SDL_QUIT == Event->type) {
        m_running = false;
    }
}
