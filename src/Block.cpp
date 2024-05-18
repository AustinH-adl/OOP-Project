#include "Block.hpp"
#include "Position.hpp"

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    Colors c;
    std::vector<Color> colors = c.ReturnColors();
}

void Block::Draw(){
    std::vector<Position> tiles = cells[rotationState];
    for(Position item: tiles){
        DrawRectangle((item.column * cellSize +1), item.row * cellSize + 1, cellSize -1, cellSize - 1, colors[id]);
    }
}