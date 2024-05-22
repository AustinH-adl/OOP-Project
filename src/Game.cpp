#include "Game.hpp"

#include <iostream>
#include <string>

#include "GameSound.hpp"
#include "Grid.hpp"
#include "Menus.hpp"
#include "Menu.hpp"
#include "Window.hpp"
#include "raylib-cpp.hpp"
#include "StartMenu.cpp"
#include "TuteMenus.cpp"

Game::Game() {
  this->_width = 300;
  this->_height = 600;
  this->_title = "TetriCity";
  this->_windowState = 1;
  this->_soundLocation = "resources/sound.wav";
  this->_statePtr = &_windowState;
  _menu = new MainMenu();
  _grid = new Grid();
  start_menu = new StartMenu();
  Tute_menu1 = new TuteMenu1();
  Tute_menu2 = new TuteMenu2();
}

void Game::Run() {
  InitWindow(
      _width, _height,
      _title);  // Initialize window with width, height and title members.
  InitAudioDevice();
  GameSound background(0.2, _soundLocation);
  background.Play();
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
        Input();
        this->_grid->Draw(_statePtr);
        break;
      case 3:
        this->start_menu->Draw(_statePtr);
        break;
      case 4:
        this->Tute_menu1->Draw(_statePtr);
        break;
      case 8:
        this->Tute_menu2->Draw(_statePtr);
    }
  }
  CloseWindow();
}

void Game::changeState(int i) { this->_windowState = i; }

void Game::Input() {
  int keyPressed = GetKeyPressed();
  switch (keyPressed) {
    case KEY_UP:
      MoveBlock(0);
      break;
    case KEY_DOWN:
      MoveBlock(1);
      break;
    case KEY_LEFT:
      MoveBlock(2);
      break;
    case KEY_RIGHT:
      MoveBlock(3);
      break;
    case KEY_R:
      rotateBlock(0);
      break;
    case KEY_T:
      rotateBlock(1);
      break;
    case KEY_ENTER:
        placeBlock(0);
        _grid->newBlock();
        break;
    }
}

void Game::MoveBlock(int direction)  // Direction corresponds to up(0), down(1),
                                     // left(2) and right(3)
{
  currentBlock = getCurrentBlock();
  switch (direction) {
    case 0:
      currentBlock->Move(-1, 0);
      if (isBlockOutside()) {
        currentBlock->Move(1, 0);
      }
      break;
    case 1:
      currentBlock->Move(1, 0);
      if (isBlockOutside()) {
        currentBlock->Move(-1, 0);
      }
      break;
    case 2:
      currentBlock->Move(0, -1);
      if (isBlockOutside()) {
        currentBlock->Move(0, 1);
      }
      break;
    case 3:
      currentBlock->Move(0, 1);
      if (isBlockOutside()) {
        currentBlock->Move(0, -1);
      }
      break;
  }
}

void Game::rotateBlock(int i) {
  switch (i) {
    case 0:
      currentBlock->Rotate(0);
      if (isBlockOutside()) {
        currentBlock->Rotate(1);
      }
      break;
    case 1:
      currentBlock->Rotate(1);
      if (isBlockOutside()) {
        currentBlock->Rotate(0);
      }
      break;
  }
}

Block* Game::getCurrentBlock() {
    return _grid->Get_Block();
}

bool Game::isBlockOutside() {
  std::vector<Position> tiles = currentBlock->getCellPosition();
  for (Position item : tiles) {
    if (!_grid->IsCellOutside(item.row, item.column)) {
      return true;
    }
  }
  return false;
}

Game::~Game() {
  delete _menu;
  delete _grid;
}

void Game::placeBlock(int i) {
  std::vector<Position> tiles = currentBlock->getCellPosition();
  _grid->place(tiles);
}
