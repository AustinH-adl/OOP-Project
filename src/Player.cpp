#include "Player.hpp"
#include "raylib-cpp.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>

/*Player::Player(const std::string& playerName) {
    this -> name = playerName;
    this -> score = 0;
}*/

Player::Player() {
    this -> name = "";
    this -> score = 0;
}

void Player::incrementScore(int points){
    this-> score += points;
    std::cout << name << "'s score: " << score << std::endl;
}

int Player::getScore(){
    return this-> score;
}