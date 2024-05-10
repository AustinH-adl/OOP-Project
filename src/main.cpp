#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "Main started" << std::endl;
    Menu menu;
    std::cout << "Constructor ran" << std::endl;
    menu.Draw();
    std::cout << "Main ran to completion" << std::endl;
    return 0;
}