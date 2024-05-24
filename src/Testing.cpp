#pragma once
#include <iostream>

class MenuTesting {
    public:
        void Test() {
        };
        void TestMenu(int i, int* j) {
            if (i == *j) {
                std::cout << "Correct state pointer for tested menu" << "\n";
            } else {
                std::cout << "Unknown or incorrect value for state pointer" << "\n";
            }
        };
};