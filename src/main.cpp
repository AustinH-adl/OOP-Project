#include "raylib-cpp.hpp"
#include "Grid.hpp"
#include "Menu.hpp"
#include "Game.hpp"
#include "Menus.hpp"
#include <iostream>
#include <string>
#include "TestBlock.hpp"

int main() {
    Game game;
    game.Run();


    TestConstructor();
    TestMove();
    TestGetCellPosition();
    TestRotate();
    TestDraw();
    std::cout << MeasureText("Tutorial", 20) << std::endl << GetFontDefault().baseSize << std::endl;
    std::cout << MeasureText("TetriCity", 20) << std::endl;
    std::cout << MeasureText("Play", 20) << std::endl;
}