#pragma once

#include <map>
#include <vector>
#include "Position.hpp"

class Block {
    public:
        Block(int id);
        int Get_Id();
        std::map<int, std::vector<Position>> cells;
    private:
        int id;
        int cellSize;
        int rotationState;
};