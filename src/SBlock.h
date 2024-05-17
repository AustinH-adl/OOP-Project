#ifndef SBLOCK_H
#define SBLOCK_H
#pragma once
#include "Block.h"
#include "Position.h"

class SBlock: public Block{
    public:
        SBlock(){
            id = 4;
            cells[0] = {Position(0,1), Position(0,2), Position(1,0), Position(1,1)};
            cells[1] = {Position(0,1), Position(1,1), Position(1,2), Position(2,2)};
            cells[2] = {Position(1,1), Position(1,2), Position(2,0), Position(2,1)};
            cells[3] = {Position(0,0), Position(1,0), Position(1,1), Position(2,1)};
        }
};

#endif