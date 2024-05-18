#pragma once

#include "raylib-cpp.hpp"
#include "MainMenu.hpp"
#include "Grid.hpp"
#include <iostream>
#include <string>

class Menu {
    private:
        int _width;
        int _height;
        const char* _title;
        int _windowState;
        int *_statePtr;
    public:
        Menu();
        void Run(); //method which desplays the menu/window
        void changeState(int);
};