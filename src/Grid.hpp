#pragma once

#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Grid.hpp"
#include "MainMenu.hpp"
#include <vector>
#include "Colors.h"

struct _gridSize {
    int numRows; //Number of rows
    int numCol; //Number of Columns
    int cellSize; //Size of cells/tiles in pixels
};

class Grid {
    private:
        _gridSize gridSize; 
        std::vector<Color> colors; // Vector of colours which is instanciated by GetColor method.
    public:
        int gridArray[20][10]; //Multilevel array of integers representing the map. array[row][column]
        Grid(); 
        Grid(int);
        void Draw(int*); //Method which displays the grid
        void Print(); //Print method for testing
        void Initialize(int); //Method which initializes all data members along with Grid constructor
        std::vector<Color> GetColor(); // Method which returns a vector of colours.
};