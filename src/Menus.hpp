#pragma once

#include "raylib-cpp.hpp"
#include "Menu.hpp"
#include "Position.hpp"
#include "Grid.hpp"
#include <string>

class StartMenu : public Menu {
    private:
        Position Label = {height/2-100, width/2-65};
        Rectangle lvl1_btn = {float(width/2.0f-50.0f), height/2.0f-15.0f, 100.0f, 30.0f};
        Position lvl1_text = {height/2-10, width/2-33};
        Rectangle lvl2_btn = {float(width/2.0f-50.0f), float(height/2.0f-15.0f+90.0f), 100.0f, 30.0f};
        Position lvl2_text = {height/2+80, width/2-36};
    public:
        void Draw(int* statePtr);
        void lvl1_btn_pressed();
        void lvl2_btn_pressed();
};

class MainMenu : public Menu {
    private:
        const char* title;
    public:
        MainMenu();
        void Draw(int*); //method which desplays the menu/window
        void StartPressed(int*);
        void TutePressed(int*);
};

class TuteMenu1 : public Menu {
    protected:
        Vector2 pos;
        const char* HowTo_text;
        Rectangle next_btn = {float(width-110.0f), float(height-25.0f), 100.0f, 30.0f};
    public:
        TuteMenu1();
        void Draw(int* Ptr);
};