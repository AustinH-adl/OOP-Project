#include "MainMenu.hpp"
#include "Grid.hpp"
#include <iostream>

MainMenu::MainMenu() {
    this->width = 300;
    this->height = 600;
    this->title = "TetriCity";
    this->Draw();
}

void MainMenu::Draw() {
    Vector2 mousePos = {-100.0f, -100.0f};
    InitWindow(width, height, title); //Initialize window with width, height and title members. 
    Rectangle button = {(this->width/2.0f - 41.0f), (this->height/2.0f-20.0f), (float)82, (float)40};
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        mousePos = GetMousePosition();
        if (CheckCollisionPointRec(mousePos, button) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                ButtonPressed();
                break;
        }
        BeginDrawing();
            ClearBackground(DARKBLUE); //Set the background to darkblue
            DrawFPS(10, 10);
            DrawRectangle(button.x, button.y, button.width, button.height, DARKGRAY);
            DrawText("Play", 140, 280, 20, BLACK);
            DrawText("TetriCity", 108, 100, 20, BLACK);
            //DrawText("TetriCity", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
}

void MainMenu::ButtonPressed() {
    BeginDrawing();
    ClearBackground(DARKBLUE);
    EndDrawing();
    Grid grid(0);
}   