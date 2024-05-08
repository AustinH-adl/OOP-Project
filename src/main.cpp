#include "raylib-cpp.hpp"
#include <iostream>

// Set window dimensions
const int screenWidth = 1920;
const int screenHeight = 1080;

int main(void)
{
    // Create window with dimensions and title
    InitWindow(screenWidth, screenHeight, "TetriCity");

    // Load test tile
    Image tile = LoadImage("resources/Tile.png");
    Texture2D tiletexture = LoadTextureFromImage(tile);
    Font titleFont = LoadFont("resources/SuperPixel.ttf");

    // Create text for testing
    const char testText[11] = "Tetri City";

    // Find size of text element and find postion to centre it
    Vector2 fontSize = MeasureTextEx(titleFont, testText, 40, 0);
    Vector2 textPos = {screenWidth / 2 - fontSize.x / 2, screenHeight / 2 - fontSize.y / 2 - 80};

    /* Test Vector2
    std::cout << fontSize.x << "\n"
              << fontSize.y << std::endl;
     */

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

    return 0;
}