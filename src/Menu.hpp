#pragma once

#include "raylib-cpp.hpp"
#include <iostream>
#include <string>

class Menu {
    private:
        int _width;
        int _height;
        const char* _title;
    public:
        Menu();
        void Draw();
};