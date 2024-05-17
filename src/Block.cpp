#include "Block.h"
#include "Grid.hpp"

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    colors = GetColor();
}

void Block::Draw(){
    std::vector<Position> tiles = cells[rotationState];
    for(Position item: tiles){
        DrawRectangle(item.column * cellSize +1, item.row * cellSize + 1, cellSize -1, cellSize - 1, colors);
    }

}