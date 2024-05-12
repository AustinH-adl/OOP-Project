#pragma once

#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include <vector>

struct _gridSize {
    int numRows; //Number of rows
    int numCol; //Number of Columns
    int cellSize; //Size of cells/tiles in pixels
};

class Grid {
    private:
        _gridSize gridSize;
        std::vector<Color> GetColor();
        std::vector<Color> colors;
    public:
        Grid();
        Grid(int);
        void Draw();

        void Initialize(int);
        int gridArray[20][10];
};