#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Grid.hpp"
#include <iostream>
#include <string>

int main() {
    
    Menu menu;
    std::cout << "Constructor called" << std::endl;
    menu.Draw();
    std::cout << "Main ran to completion" << std::endl;
    return 0;
}