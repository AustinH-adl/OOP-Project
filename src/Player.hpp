#pragma once

#include <string>
#include <iostream>

class Player{
    private:
        std::string name;
        int score;
    public:
        Player();
        Player(const std::string& playerName);
        void incrementScore(int points);
        int getScore();
        
};
