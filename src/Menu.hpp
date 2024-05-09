#ifndef MENU_H
#define MENU_H

#include "raylib-cpp.hpp"
#include <iostream>
#include <string>

class Menu {
    private:
        const int screenWidth = 1920;
        const int screenHeight = 1080;
        const char testText[11] = "Tetri City";
        Image tile;
        Texture2D tiletexture;
        Font titleFont;
        Vector2 fontSize;
        Vector2 textPos;
    public:
        Menu();
        void Draw();
};

#endif