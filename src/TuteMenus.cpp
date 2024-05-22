#pragma once

#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Position.hpp"
#include "Grid.hpp"
#include "Menus.hpp"
#include <iostream>

void TuteMenu1::Draw(int* Ptr) {
    std::cout << *Ptr << std::endl;
    const char* text = "When in a level use the arrow\nkeys to move the current \nblock. When the desired spot \nto  place the block is found \npress enter to permanentlly \nplace the block";
    pos.x = 0.0;
    pos.y= 0.0;
    this->statePtr = Ptr;
    Vector2 mousePos = {-100.0f, -100.0f}; 
    mousePos = GetMousePosition();
    BeginDrawing();
        ClearBackground(DARKBLUE); //Set the background to darkblue
        DrawTextEx(GetFontDefault(), text, pos, 20, 1, BLACK);
        DrawRectangle(next_btn.x, next_btn.y, next_btn.width, next_btn.height, GRAY);
        DrawText("Next", width-96, height-40, 20, BLACK);
    EndDrawing();
    if (CheckCollisionPointRec(mousePos, next_btn) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            *Ptr=8;
    }
}

void TuteMenu2::Draw(int *Ptr) {
    std::cout << *Ptr << std::endl;
    pos.x = 0.0;
    pos.y= 0.0;
    this->statePtr = Ptr;
    Vector2 mousePos = {-100.0f, -100.0f}; 
    mousePos = GetMousePosition();
    BeginDrawing();
        ClearBackground(DARKBLUE); //Set the background to darkblue
        DrawTextEx(GetFontDefault(), text, pos, 20, 1, BLACK);
        DrawRectangle(next_btn.x, next_btn.y, next_btn.width, next_btn.height, GRAY);
        DrawText("Next", width-96, height-40, 20, BLACK);
    EndDrawing();
    if (CheckCollisionPointRec(mousePos, next_btn) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            *Ptr=1;
    }
}