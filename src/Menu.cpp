#include "raylib-cpp.hpp"
#include "Grid.hpp"
#include "Window.hpp"
#include <iostream>
#include <string>

Menu::Menu() {
    this->_width = 300;
    this->_height = 600;
    this->_title = "TetriCity";
};

void Menu::Draw() {
    InitWindow(_width, _height, _title); //Initialize window with width, height and title members. 
    SetTargetFPS(60);
    Grid grid(0); //Instantiate grid object which calls initialize with 0
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(DARKBLUE); //Set the background to darkblue
            //DrawText("TetriCity", 190, 200, 20, LIGHTGRAY);
            grid.Draw(); //Call grid's draw method
        EndDrawing();
    }
    CloseWindow();
}
/*
Menu::~Menu() {
    delete _title;
}
*/