#include <QCoreApplication>
#include <SDL.h>
#undef main
#include <QtCore/QDebug>

int main(int argc, char *argv[])
{
    qDebug( "the integer is: %d", 12345 );
    QCoreApplication a(argc, argv);
    // Set joystick variable
        SDL_Joystick *joy;
        SDL_Event event;
        // Initialization
        SDL_Init(SDL_INIT_JOYSTICK);
        SDL_JoystickEventState(SDL_ENABLE);
        // set active
        joy = SDL_JoystickOpen(0);

        while(1)
        {
            // delay
            unsigned int j = 0;
            for (j = 0; j < 60000; j++);

            SDL_PollEvent(&event);

            // get stick X position
            int xAxis = SDL_JoystickGetAxis(joy, 0);
            // get stick y position
            int yAxis = SDL_JoystickGetAxis(joy, 1);
            //get stick w position
            int wAxis = SDL_JoystickGetAxis(joy, 2);
            //get button 1-9 values
            int Button0 = SDL_JoystickGetButton(joy,0);
            int Button1 = SDL_JoystickGetButton(joy,1);
            int Button2 = SDL_JoystickGetButton(joy,2);
            int Button3 = SDL_JoystickGetButton(joy,3);
            int Button4 = SDL_JoystickGetButton(joy,4);
            int Button5 = SDL_JoystickGetButton(joy,5);
            int Button6 = SDL_JoystickGetButton(joy,6);
            int Button7 = SDL_JoystickGetButton(joy,7);
            int Button8 = SDL_JoystickGetButton(joy,8);
            // Show joystick values
            qDebug() << xAxis << yAxis << wAxis << Button0 << Button1 << Button2 << Button3 << Button4 << Button5 << Button6 << Button7 << Button8;
        }
    return a.exec();

}
