#pragma once
#include "Block.hpp"
#include "Position.hpp"
#include "Blocks.cpp"
#include <iostream>
#include "raylib-cpp.hpp"

// Helper function to initialize a block with specific cells
void InitializeBlock(Block &block) {
    std::vector<Position> positions = { Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1) };
    block.cells[0] = positions;
    block.cells[1] = positions; // Assume same for simplicity
}

void TestConstructor() {
    Block block;
    std::cout << "TestConstructor: Block initialized" << std::endl;
}

void TestMove() {
    Block block;
    InitializeBlock(block);
    block.Move(3, 4);
    std::cout << "TestMove: Block moved" << std::endl;
}

void TestGetCellPosition() {
    Block block;
    InitializeBlock(block);
    std::vector<Position> positions = block.getCellPosition();
    std::cout << "TestGetCellPosition: Block positions retrieved" << std::endl;
}

void TestRotate() {
    Block block;
    InitializeBlock(block);
    block.Rotate(0);
    std::cout << "TestRotate: Block rotated clockwise" << std::endl;
    block.Rotate(1);
    std::cout << "TestRotate: Block rotated counter-clockwise" << std::endl;
}

void TestDraw() {
    Block block;
    InitializeBlock(block);
    block.Draw();
    std::cout << "TestDraw: Block drawn" << std::endl;
}

/*int main() {
    TestConstructor();
    TestMove();
    TestGetCellPosition();
    TestRotate();
    TestDraw();

    return 0;
}*/