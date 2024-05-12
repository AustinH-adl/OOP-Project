#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Grid.hpp"
#include <iostream>
#include <string>

Menu::Menu() {
    this->_width = 300;
    this->_height = 600;
    this->_title = "TetriCity";

};

void Menu::Draw() {
    InitWindow(_width, _height, _title);
    SetTargetFPS(60);
    Grid grid = Grid(0);
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(DARKBLUE);
            //DrawText("TetriCity", 190, 200, 20, LIGHTGRAY);
            grid.Draw();
        EndDrawing();
    }
    CloseWindow();
}
/*
Menu::~Menu() {
    delete _title;
}
*/