#ifndef TBLOCK_H
#define TBLOCK_H
#pragma once
#include "Block.h"
#include "Position.h"

class TBlock: public Block{
    public:
        TBlock(){
            id = 5;
            cells[0] = {Position(0,1), Position(1,0), Position(1,1), Position(1,2)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,1)};
            cells[2] = {Position(1,0), Position(1,1), Position(1,2), Position(2,1)};
            cells[3] = {Position(0,1), Position(1,0), Position(1,1), Position(2,1)};
        }
};

#endif