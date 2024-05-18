#include "Block.hpp"
#include "Position.hpp"

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    colors = GetColor();
}

void Block::Draw(){
    std::vector<Position> tiles = cells[rotationState];
    for(Position item: tiles){
        DrawRectangle(item.get_Column() * cellSize +1, item.get_Row() * cellSize + 1, cellSize -1, cellSize - 1, colors[id]);
    }

}