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
    _menu = new MainMenu();
    _grid = new Grid();
}

void Game::Run() {
    InitWindow(_width, _height, _title); //Initialize window with width, height and title members. 
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        switch (this->_windowState) {
            case 0:
                DrawText("No State", 150, 300, 20, BLACK);
                break;
            case 1:
                this->_menu->Draw(_statePtr);
                break;
            case 2:
                std::cout << "Ran to grid.draw" << std::endl;
                this->_grid->Draw(_statePtr);
                break;
        }
    }
    CloseWindow();
}

void Game::changeState(int i) {
    this->_windowState = i;
}

void Game::Input() {
    int keyPressed = GetKeyPressed();
    switch (keyPressed)
    {
    case KEY_UP:
        MoveBlock(0);
        break;
    }
}

void Game::MoveBlock(int direction) //Direction corresponds to up(0), down(1), left(2) and right(3)
{
    currentBlock = getCurrentBlock();
    switch (direction)
    {
    case 0:
        currentBlock->Move(-1, 0);
        break;
    case 1:
        currentBlock->Move(1, 0);
        break;
    case 2:
        currentBlock->Move(0, -1);
        break;
    case 3:
        currentBlock->Move(0, 1);
        break;
    }
}

Block *Game::getCurrentBlock() {
    return _grid->Get_Block();
}

Game::~Game() {
    delete _menu;
    delete _grid;
}
