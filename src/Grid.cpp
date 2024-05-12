#include "Grid.hpp"
#include "raylib-cpp.hpp"
#include "Menu.hpp"

Grid::Grid(int i) {
    std::cout << "Grid Constructor called" << std::endl;
    this->gridSize.numRows = 10;
    this->gridSize.numCol = 20;
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
        for (int row = 0; row < this->gridSize.numRows; row++) {
            for (int col = 0; col < this->gridSize.numCol; col++) {
                gridArray[row][col] = 0;
            }
        }
    } 
    std::cout<< "Grid Initialized" << std::endl;
}

void Grid::Draw() {
    for (int row = 0; row < this->gridSize.numRows; row++) {
        for (int col = 0; col < this->gridSize.numCol; col++) {
            int cellValue = gridArray[row][col];
            DrawRectangle((col * this->gridSize.cellSize), (row * this->gridSize.cellSize), this->gridSize.cellSize-1, this->gridSize.cellSize-1, colors[cellValue]);
            std::cout << "rectangle Drawn" << std::endl;
        }
        std::cout << "Row: " << row << " complete" << std::endl;
    }
}

std::vector<Color> Grid::GetColor() {
    std::cout << "GetColor run" << std::endl;
    return {LIGHTGRAY, YELLOW, PINK, RED, BLUE};
}