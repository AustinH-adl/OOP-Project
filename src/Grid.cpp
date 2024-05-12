#include "Grid.hpp"
#include "raylib-cpp.hpp"
#include "Menu.hpp"

Grid::Grid(int i) {
    //std::cout << "Grid Constructor called" << std::endl;
    this->gridSize.numRows = 20;
    this->gridSize.numCol = 10;
    this->gridSize.cellSize = 30;
    this->Initialize(i);
    colors = GetColor();
}
Grid::Grid() {
    this->gridSize.numRows = 10;
    this->gridSize.numCol = 20;
    this->gridSize.cellSize = 30;
    colors = GetColor();
}

void Grid::Initialize(int i) {
    if (i=0) {
        for (int row = 0; row < gridSize.numRows; row++) {
            for (int col = 0; col < gridSize.numCol; col++) {
                gridArray[row][col] = 0;
            }
        }
    } 
    //std::cout<< "Grid Initialized" << std::endl;
}

void Grid::Draw() {
    for (int row = 0; row < gridSize.numRows; row++) {
        for (int col = 0; col < gridSize.numCol; col++) {
            int cellValue = gridArray[row][col];
            DrawRectangle(col * gridSize.cellSize+1, row * gridSize.cellSize+1, gridSize.cellSize-1, gridSize.cellSize-1, Color(DARKGRAY));
            //std::cout << "rectangle Drawn at row:" << row+1 << " And Column:" << col+1 << std::endl << "Cell value is:" << cellValue << std::endl;
        }
    }
}

std::vector<Color> Grid::GetColor() {
    //std::cout << "GetColor run" << std::endl;
    return {LIGHTGRAY, YELLOW, PINK, RED, BLUE};
}