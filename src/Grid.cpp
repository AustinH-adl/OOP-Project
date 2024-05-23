#include "Grid.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>

#include "Block.hpp"
#include "Blocks.cpp"
#include "Colors.hpp"
#include "Level.hpp"
#include "Levels.hpp"
#include "raylib-cpp.hpp"

Grid::Grid(int i) {
  this->gridSize.numRows = 20;
  this->gridSize.numCol = 10;
  this->gridSize.cellSize = 30;
  Initialize(0);
  Colors c;
  colors = c.ReturnColors();
}

Grid::Grid() {
  this->gridSize.numRows = 20;
  this->gridSize.numCol = 10;
  this->gridSize.cellSize = 30;
  Colors c;
  colors = c.ReturnColors();
  Initialize(0);
}

void Grid::Initialize(int i) {
  // iterates through the gridarray and sets all elements to 0
  lvl = new Level1();
  std::vector<std::vector<int>> mapVec = lvl->returnMap();
  blocks = lvl->returnBlocks();
  if (i == 0) {
    for (int row = 0; row < gridSize.numRows; row++) {
      for (int col = 0; col < gridSize.numCol; col++) {
        gridArray[row][col] = mapVec[row][col];
      }
    }
  }
  // std::cout << "Ran through init" << std::endl;
  this->newBlock();
}

Block* Grid::Get_Block() { return currentBlock; }

bool Grid::IsCellOutside(int row, int column) {
  if (gridArray[row][column] > 0) {
    return true;
  }
  return false;
}

void Grid::Print() {
  for (int row = 0; row < gridSize.numRows; row++) {
    for (int col = 0; col < gridSize.numCol; col++) {
      std::cout << gridArray[row][col];
    }
    std::cout << std::endl;
  }
}

void Grid::Draw(int* ptr) {
  int cellValue = 0;
  BeginDrawing();
  for (int row = 0; row < gridSize.numRows; row++) {
    for (int col = 0; col < gridSize.numCol; col++) {
      cellValue = gridArray[row][col];
      // Display the each gridcell using display rectangle RAYLIB method
      ClearBackground(DARKGRAY);
      DrawRectangle(col * gridSize.cellSize + 1, row * gridSize.cellSize + 1,
                    gridSize.cellSize - 1, gridSize.cellSize - 1,
                    colors[cellValue]);
      // std::cout << "rectangle Drawn at row:" << row+1 << " And Column:" <<
      // col+1 << std::endl << "Cell value is:" << cellValue << std::endl;
    }
  }
  // drawBox();
  currentBlock->Draw();
  EndDrawing();
}

Grid::~Grid() { delete currentBlock; }

bool Grid::IsCellPlacable(int row, int column) {
  if (gridArray[row][column] == 1) {  // if val is 1, cell is placeable
    return true;
  } else {
    return false;
  }
}
void Grid::place(std::vector<Position> tiles) {
  for (Position items : tiles) {
    gridArray[items.row][items.column] = currentBlock->id;
  }
}

void Grid::newBlock() {
  if (blocks.size() > 0) {
    int index = rand() % blocks.size();
    Block* block = blocks[index];
    blocks.erase(blocks.begin() + index);
    currentBlock = block;
  } else if (blocks.size() == 0) {
    currentBlock = new nullBlock();
  }
}

std::vector<Block*> Grid::getBlocks() { return blocks; }
