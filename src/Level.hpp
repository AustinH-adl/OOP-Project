#pragma once

#include <vector>
class Level {
    protected:
        std::vector<std::vector<int>> Map;
    public:
        std::vector<std::vector<int>> returnMap();
};