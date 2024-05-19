#include "Block.hpp"
#include "Position.hpp"
#include "Blocks.cpp"
#include <iostream>

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    Colors c;
    std::vector<Color> colors = c.ReturnColors();
    rowOffset = 0;
    columnOffset = 0;
}

void Block::Draw(){
    std::cout << "Ran to draw" << std::endl;
    std::vector<Position> tiles = getCellPosition();
    std::cout << "Got Cell position" << std::endl;
    for(Position item: tiles){
        DrawRectangle((item.column * cellSize +1), item.row * cellSize + 1, cellSize -1, cellSize - 1, RED);
        std::cout << "Drawing rectangle" << std::endl;
    }
}

void Block::Move(int rows, int columns) {
    rowOffset +=rows;
    columnOffset +=columns;
}

std::vector<Position> Block::getCellPosition() {
    std::cout << "Ran to getCellPostion" << std::endl;
    std::vector<Position> tiles = cells[rotationState];
    std::cout << "Got rotationstate" << std::endl;
    std::vector<Position> movedTiles;
    for(Position item : tiles) {
        Position newPos(int(item.row +rowOffset), int(item.column + columnOffset));
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void Block::Rotate(int i) {
    if(i==0) {
        rotationState++;
        if(rotationState==cells.size()) {
            rotationState = 0;
        }
    } else if (i == 1) {
        rotationState--;
        if (rotationState<0) {
            rotationState = cells.size();
        }
    }
}
