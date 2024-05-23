#include "Game.hpp"

#include <iostream>
#include <string>

#include "GameSound.hpp"
#include "Grid.hpp"
#include "Menus.hpp"
#include "Menu.hpp"
#include "Window.hpp"
#include "raylib-cpp.hpp"
#include "Player.hpp"
#include <unistd.h>
#include "StartMenu.cpp"
#include "TuteMenus.cpp"
#include "Blocks.cpp"
#include <fstream>
#include <string>

Game::Game() {
  this->_width = 500;
  this->_height = 600;
  this->_title = "TetriCity";
  this->_windowState = 1;
  this->_soundLocation = "resources/sound.wav";
  this->_statePtr = &_windowState;
  _menu = new MainMenu();
  _grid = new Grid();
  _player = new Player();
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
        drawScore(_player);
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
        break;
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
      if(isBlockPlaceable()){
        placeBlock(0);
        _grid->newBlock();
      }
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

bool Game::isBlockPlaceable(){ //calls is cell outside for each tile of a block 
    std::vector<Position> tiles = currentBlock->getCellPosition();
    for (Position item : tiles) { //if the tile enters a grid with val 0 it returns true 
        if(!_grid->IsCellPlacable(item.row, item.column)) {
             //Error message is displayed
            drawError(); 
            return false;
        }
    }
    return true;
}


Block* Game::getCurrentBlock() { return _grid->Get_Block(); }

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
  delete _player;
  delete start_menu;
  delete Tute_menu1;
  delete Tute_menu2;
}

void Game::placeBlock(int i) {
  std::vector<Position> tiles = currentBlock->getCellPosition();
  _grid->place(tiles);
  for (Position item : tiles) {
    _player->incrementScore(1);
  }
}

void Game::drawScore(Player* _player){ //Draws the score dynamically for each change in the score and draw/checkfor press of save_btn and load_btn
  Vector2 mousePos = {-100.0f, -100.0f}; 
  Rectangle save_btn = {float(this->_width - 180), float(this->_height/2.0f-20.0f), (float)170, (float)40};
  Rectangle load_btn = {float(this->_width -180), float(this->_height/2.0f+30), (float)170, (float)40};
  mousePos = GetMousePosition();
  int score = _player->getScore(); //score updates after a block is placed from input
  //Score visuals
  //Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

  DrawText("Score", 350, 10, 20, WHITE);

  char scoreText[10];

  snprintf(scoreText, sizeof(scoreText), "%d", score);
  Vector2 textsize = MeasureTextEx(GetFontDefault(), scoreText, 38, 2);
                    // left ,width, right, height
  DrawRectangle(save_btn.x, save_btn.y, save_btn.width, save_btn.height, BLUE);
  DrawRectangle(load_btn.x, load_btn.y, load_btn.width, load_btn.height, BLUE);
  DrawText("Save", save_btn.x+10, save_btn.y+10, 20, BLACK);
  DrawText("Load", load_btn.x+10, load_btn.y+10, 20, BLACK);
  DrawRectangleRounded({320, 50, 170, 100}, 0.3, 6, BLUE); //Draw the blue box behind score number
  DrawTextEx(GetFontDefault(), scoreText, {380, 75}, 38, 2, WHITE); // Draws number score and updates
  if (CheckCollisionPointRec(mousePos, save_btn) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    save();
  } else if (CheckCollisionPointRec(mousePos, load_btn) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    load();
  }
}

void Game::drawError(){
  BeginDrawing();
    ClearBackground(DARKGRAY);
    DrawText("Can't place block here", _width/2-100, _width/2-100, 20, BLACK);
  EndDrawing();
  sleep(1);
}

void Game::save() {
  std::vector<Block*> blocks;
  blocks = _grid->getBlocks();
  std::ofstream map_file("resources/map.txt");
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 10; j++) {
      map_file << _grid->gridArray[i][j] << " ";
    }
    map_file << '\n';
  }
  map_file.close();
  std::ofstream block_file("resources/blocks.txt");
  block_file << blocks.size()+1 << "\n";
  block_file << _grid->Get_Block()->id << " ";
  if (blocks.size()!=0) {
    for (int i = 0; i < blocks.size(); i++) {
      block_file << blocks[i]->id  << " ";
    }
  }
  block_file.close();
}

void Game::load() {
  std::vector<int> tempid;
  std::vector<Block*> tempBlock;
  int tempgrid[20][10];
  std::ifstream map_file("resources/map.txt"); 
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 10; j++) {
      map_file >> tempgrid[i][j];
      //std::cout << tempgrid[i][j];
    }
    //std::cout << "\n";
  }
  map_file.close();
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 10; j++) {
      _grid->gridArray[i][j] = tempgrid[i][j];
    }
  }
  std::ifstream block_file("resources/blocks.txt");
  int count; 
  block_file >> count;
  std::cout << count << "\n";
  for (int i = 0; i < count; i++) {
    int id;
    block_file >> id;
    tempid.push_back(id);
    std::cout << tempid[i] << " ";
  }
  block_file.close();
  for (int i : tempid) {
    switch (i) {
      case 2:
        tempBlock.push_back(new CBlock());
        break;
      case 3:
        tempBlock.push_back(new IBlock());
        break;
      case 4:
        tempBlock.push_back(new LBlock());
        break;
      case 5:
        tempBlock.push_back(new SBlock());
        break;
      case 6:
        tempBlock.push_back(new TBlock());
        break;
      case 7:
        tempBlock.push_back(new JBlock());
        break;
      case 8:
        tempBlock.push_back(new OBlock());
        break;
      case 9:
        tempBlock.push_back(new ZBlock());
        break;
    }
  }
  _grid->getBlocks() = tempBlock;
  _grid->newBlock();
}

/*
bool collisionDetection(int newRowOffset, int newColOffset){
  std::vector<Position> currentTiles = currentBlock->getCellPosition();
  for (Position item: currentTiles){int newRow = item.row + newRowOffset;
  int newCol = item.
}
*/