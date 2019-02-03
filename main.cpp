#include <QCoreApplication>
#include <SDL.h>
#undef main
#include <stdio.h>
#include <iostream>
#include <QtCore/QDebug>

int main(int argc, char *argv[])
{
    qDebug( "the integer is: %d", 12345 );
    QCoreApplication a(argc, argv);
    // Переменная для нашего джойстика
        SDL_Joystick *joy;
        SDL_Event event;

        // Инициализация SDL для использования джойстика
        SDL_Init(SDL_INIT_JOYSTICK);
        // Включаем
        SDL_JoystickEventState(SDL_ENABLE);
        // Открываем ;)
        joy = SDL_JoystickOpen(0);

        while(1)
        {
            // Примитивнейшая задержка
            unsigned int j = 0;
            for (j = 0; j < 60000; j++);

            SDL_PollEvent(&event);

            // Получаем значения, соответствующие смещению джойстика
            // по оси Х
            int xAxis = SDL_JoystickGetAxis(joy, 0);
            // по оси Y
            int yAxis = SDL_JoystickGetAxis(joy, 1);
int wAxis = SDL_JoystickGetAxis(joy, 2);
int Button0 = SDL_JoystickGetButton(joy,0);
int Button1 = SDL_JoystickGetButton(joy,1);
int Button2 = SDL_JoystickGetButton(joy,2);
int Button3 = SDL_JoystickGetButton(joy,3);
int Button4 = SDL_JoystickGetButton(joy,4);
int Button5 = SDL_JoystickGetButton(joy,5);
int Button6 = SDL_JoystickGetButton(joy,6);
int Button7 = SDL_JoystickGetButton(joy,7);
int Button8 = SDL_JoystickGetButton(joy,8);
            // Выводим
            qDebug() << xAxis << yAxis << wAxis << Button0 << Button1 << Button2 << Button3 << Button4 << Button5 << Button6 << Button7 << Button8;
        }
    return a.exec();

}
