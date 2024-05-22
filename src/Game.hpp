#pragma once

#include <iostream>
#include <string>

#include "Block.hpp"
#include "Grid.hpp"
#include "Menus.hpp"
#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Menus.hpp"

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
  StartMenu *start_menu;
  TuteMenu1 *Tute_menu1;

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
  ~Game();
};