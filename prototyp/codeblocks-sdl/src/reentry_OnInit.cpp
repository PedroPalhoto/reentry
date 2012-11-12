#include <reentry.h>

bool reentry::OnInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) return false;

    m_surf_display =
        SDL_SetVideoMode(DEFAULT_SCREEN_WIDTH, DEFAULT_SCREEN_HEIGHT,
                         DEFAULT_SCREEN_BPP, DEFAULT_SCREEN_SDL_FLAGS);

    if (NULL == m_surf_display) return false;

    // \todo Load Menu

    // Load Background Image
    SDL_Surface *backgroud;
    backgroud = IMG_Load("gfx/star_background.png");
    SDL_BlitSurface(backgroud, NULL, m_surf_display, NULL);
    SDL_Flip(m_surf_display);

    atexit(SDL_Quit);
    return true;
}
