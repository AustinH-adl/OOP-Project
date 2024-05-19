#pragma once

#include "raylib-cpp.hpp"
#include "Grid.hpp"
#include "MainMenu.hpp"
#include <vector>
#include "Colors.hpp"
#include "Block.hpp"

struct _gridSize {
    int numRows; //Number of rows
    int numCol; //Number of Columns
    int cellSize; //Size of cells/tiles in pixels
};

class Grid {
    private:
        _gridSize gridSize; 
        std::vector<Color> colors; // Vector of colours which is instanciated by GetColor method.
        Block* currentBlock;
        std::vector<Block> blocks;
    public:
        int gridArray[20][10]; //Multilevel array of integers representing the map. array[row][column]
        Grid(); 
        Grid(int);
        void Draw(int*); //Method which displays the grid
        void Print(); //Print method for testing
        void Initialize(int); //Method which initializes all data members along with Grid constructor
        Block* Get_Block();
        bool IsCellOutside(int row, int column);
        bool IsCellPlacable(int row, int column);
        ~Grid();
};