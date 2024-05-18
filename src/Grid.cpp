#include "Grid.hpp"
#include "raylib-cpp.hpp"
#include "Levels.hpp"
#include "Colors.hpp"
#include <vector>
#include <iostream>

Grid::Grid(int i) {
    this->gridSize.numRows = 20;
    this->gridSize.numCol = 10;
    this->gridSize.cellSize = 30;
    Initialize(0);
    Colors c;
    colors = c.ReturnColors();
}

Grid::Grid() {
    this->gridSize.numRows = 20;
    this->gridSize.numCol = 10;
    this->gridSize.cellSize = 30;
    Colors c;
    colors = c.ReturnColors();
    Initialize(0);
}

void Grid::Initialize(int i) {
    //iterates through the gridarray and sets all elements to 0
    Level1 map;
    std::vector<std::vector<int>> mapVec = map.returnMap();
    if (i==0) {
        for (int row = 0; row < gridSize.numRows; row++) {
            for (int col = 0; col < gridSize.numCol; col++) {
                gridArray[row][col] = mapVec[row][col];
            }
        }
    } 
}

void Grid::Print() {
    for (int row = 0; row < gridSize.numRows; row++) {
        for (int col = 0; col < gridSize.numCol; col++) {
            std::cout << gridArray[row][col];
        }
        std::cout << std::endl;
    }
}

void Grid::Draw(int* ptr) {
    int cellValue = 0;
    BeginDrawing();
    for (int row = 0; row < gridSize.numRows; row++) {
        for (int col = 0; col < gridSize.numCol; col++) {
            cellValue = gridArray[row][col];
            //Display the each gridcell using display rectangle RAYLIB method
            DrawRectangle(col * gridSize.cellSize+1, row * gridSize.cellSize+1, gridSize.cellSize-1, gridSize.cellSize-1, colors[cellValue]);
            //std::cout << "rectangle Drawn at row:" << row+1 << " And Column:" << col+1 << std::endl << "Cell value is:" << cellValue << std::endl;
        }
    }
    EndDrawing();
}
