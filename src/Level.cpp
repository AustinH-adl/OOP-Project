#include "Level.hpp"

#include <vector>

#include "Block.hpp"

std::vector<std::vector<int>> Level::returnMap() { return this->Map; }

std::vector<Block*> Level::returnBlocks() { return blocks; }

Level::~Level() {
  for (Block* items : blocks) {
    delete items;
  }
}