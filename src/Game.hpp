#pragma once

#include "raylib-cpp.hpp"
#include "MainMenu.hpp"
#include "Grid.hpp"
#include <iostream>
#include <string>

class Game {
    private:
        int _width;
        int _height;
        const char* _title;
        int _windowState;
        int *_statePtr;
    public:
        Game();
        void Run(); //method which desplays the Game/window
        void changeState(int);
};