#include "Block.hpp"
#include "Position.hpp"

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    Colors c;
    std::vector<Color> colors = c.ReturnColors();
    rowOffset = 0;
    columnOffset = 0;
}

void Block::Draw(){
    std::vector<Position> tiles = getCellPosition();
    for(Position item: tiles){
        DrawRectangle((item.column * cellSize +1), item.row * cellSize + 1, cellSize -1, cellSize - 1, colors[id]);
    }
}

void Block::Move(int rows, int columns) {
    rowOffset +=rows;
    columnOffset +=columns;
}

std::vector<Position> Block::getCellPosition() {
    std::vector<Position> tiles = cells[rotationState];
    std::vector<Position> movedTiles;
    for(Position item : tiles) {
        Position newPos(int(item.row +rowOffset), int(item.column + columnOffset));
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}