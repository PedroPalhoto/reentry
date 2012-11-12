#ifndef MENU_H
#define MENU_H


class menu
{
    public:
        menu();
        virtual ~menu();

        int  OnExecute();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();

        bool OnInit();
    protected:
    private:
};

#endif // MENU_H
