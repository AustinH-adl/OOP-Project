#include <vector>
#include "Level.hpp"

std::vector<std::vector<int>> Level::returnMap() {
    return this->Map;
}

std::vector<Block*> Level::returnBlocks() {
     return blocks; 
}

Level::~Level() {
    for(int i; i < blocks.size(); i++) {
        delete blocks[i];
    }
}