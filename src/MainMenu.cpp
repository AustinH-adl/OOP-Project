#include "MainMenu.hpp"
#include "Grid.hpp"
#include <iostream>

MainMenu::MainMenu() {
    this->width = 300;
    this->height = 600;
    this->title = "TetriCity";
}

void MainMenu::Draw(int* ptr) {
    Vector2 mousePos = {-100.0f, -100.0f}; 
    Rectangle button = {(this->width/2.0f - 41.0f), (this->height/2.0f-20.0f), (float)82, (float)40};
    mousePos = GetMousePosition();
    BeginDrawing();
        ClearBackground(DARKBLUE); //Set the background to darkblue
        DrawFPS(10, 10);
        DrawRectangle(button.x, button.y, button.width, button.height, DARKGRAY);
        DrawText("Play", 140, 280, 20, BLACK);
        DrawText("TetriCity", 108, 100, 20, BLACK);
        //DrawText("TetriCity", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
    if (CheckCollisionPointRec(mousePos, button) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            ButtonPressed(ptr);
    }
}

void MainMenu::ButtonPressed(int *ptr) {
    *ptr = 2;
}