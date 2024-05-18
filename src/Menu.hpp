#pragma once

#include "raylib-cpp.hpp"
#include "MainMenu.hpp"
#include "Grid.hpp"
#include <iostream>
#include <string>

//Menu class represents the Raylib window
class Menu {
    private:
        int _width;
        int _height;
        const char* _title;
        int _windowState; //Integer representing what should be displayed on screen
        int *_statePtr; //Pointer to window state used as the arguement for other class constructors
    public:
        Menu();
        void Run(); //method which desplays the menu/window
        void changeState(int); //Change the state of _windowState to the int arguement
};