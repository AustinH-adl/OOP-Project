#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>

Menu::Menu() {
    this->_width = 500;
    this->_height = 500;
    this->_title = "TetriCity";
};

void Menu::Draw() {
    InitWindow(this->_width, this->_height, this->_title);
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("TetriCity", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
}
/*
Menu::~Menu() {
    delete _title;
}
*/