#include "Block.hpp"

#include <iostream>

#include "Blocks.cpp"
#include "Position.hpp"

Block::Block() {
  cellSize = 30;
  rotationState = 0;
  Colors c;
  std::vector<Color> colors = c.ReturnColors();
  rowOffset = 2;
  columnOffset = 2;
}

void Block::Draw() {
  std::vector<Position> tiles = getCellPosition();
  // std::cout << "GetCellPos ran" << std::endl;
  for (Position item : tiles) {
    DrawRectangle(int(item.column * cellSize + 1), int(item.row * cellSize + 1),
                  int(cellSize - 1), int(cellSize - 1), PURPLE);
  }
}

void Block::Move(int rows, int columns) {
  // std::cout << "RowOffset before: " << rowOffset << "ColumnOffset before: "
  // << columnOffset << std::endl;
  rowOffset += rows;
  columnOffset += columns;
  // std::cout << "RowOffset after: " << rowOffset << "ColumnOffset after: " <<
  // columnOffset << std::endl;
}

std::vector<Position> Block::getCellPosition() {
  // std::cout << "Get cell started" << std::endl;
  std::vector<Position> tiles = cells[rotationState];
  // std::cout << "Tiles obtained" << std::endl;
  std::vector<Position> movedTiles;
  for (Position item : tiles) {
    Position newPos(int(item.row + rowOffset), int(item.column + columnOffset));
    movedTiles.push_back(newPos);
    // std::cout << "Pushed to movedtiles" << std::endl;
  }
  return movedTiles;
}

void Block::Rotate(int i) {
  if (i == 0) {
    rotationState++;
    if (rotationState == cells.size()) {
      rotationState = 0;
    }
  } else if (i == 1) {
    rotationState--;
    if (rotationState < 0) {
      rotationState = cells.size();
    }
  }
}