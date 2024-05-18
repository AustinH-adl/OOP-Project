#pragma once
#include <vector>
#include <map>
#include "Position.hpp"
#include "Colors.hpp"

class Block{

    private:
        int cellSize;
        int rotationState;
        std::vector<Color> colors;
        
    public:
        Block();
        int id;
        std::map<int, std::vector<Position>> cells;
        void Draw();

};
