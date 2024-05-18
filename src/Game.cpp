#include "raylib-cpp.hpp"
#include "Grid.hpp"
#include "Game.hpp"
#include "MainMenu.hpp"
#include "Window.hpp"
#include <iostream>
#include <string>

Game::Game() {
    this->_width = 300;
    this->_height = 600;
    this->_title = "TetriCity";
    this->_windowState = 1;
    this->_statePtr = &_windowState;
}

void Game::Run() {
    InitWindow(_width, _height, _title); //Initialize window with width, height and title members. 
    SetTargetFPS(60);
    Grid grid;
    MainMenu menu;
    while (!WindowShouldClose()) {
        switch (this->_windowState) {
            case 0:
                DrawText("No State", 150, 300, 20, BLACK);
                break;
            case 1:
                menu.Draw(_statePtr);
                break;
            case 2:
                grid.Draw(_statePtr);
                break;
        }
    }
    CloseWindow();
}

void Game::changeState(int i) {
    this->_windowState = i;
}