#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>

Menu::Menu() {
    tile = LoadImage("resources/Tile.png");
    tiletexture = LoadTextureFromImage(tile);
    titleFont = LoadFont("resources/SuperPixel.ttf");
    fontSize = MeasureTextEx(titleFont, testText, 40, 0);
    textPos = {screenWidth / 2 - fontSize.x / 2, screenHeight / 2 - fontSize.y / 2 - 80};
}

void Menu::Draw() {
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // Test text and image drawing
        // font, text, postion, font size, spacing, colour
        DrawTextEx(titleFont, testText, textPos, 40, 0, BLACK);
        DrawTexture(tiletexture, screenWidth / 2 - tiletexture.width / 2, screenHeight / 2 - tiletexture.height / 2, WHITE);

        EndDrawing();
    }
    CloseWindow();
}