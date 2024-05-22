#pragma once

#include <iostream>
#include <string>

#include "Block.hpp"
#include "Grid.hpp"
#include "MainMenu.hpp"
#include "raylib-cpp.hpp"
#include "Player.hpp"


class Game {
 private:
  int _width;
  int _height;
  const char *_title;
  const char *_soundLocation;
  int _windowState;
  int *_statePtr;
  Block *currentBlock;
  Grid *_grid;
  MainMenu *_menu;
  Player* _player;

 public:
  Game();
  void Run();  // method which desplays the Game/window
  void changeState(int);
  void Input();
  void MoveBlock(int);
  void rotateBlock(int);
  void placeBlock(int);
  Block *getCurrentBlock();
  bool isBlockOutside();
  bool isBlockPlaceable();
  void drawScore(Player* player);
  void drawError();
  ~Game();
};