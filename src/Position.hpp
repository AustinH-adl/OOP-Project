#pragma once

//Position class used as a data type to return a row and column
class Position{
    private:
        int row;
        int column;
    public:
        Position(int row, int column);
        int get_Row();
        int get_Column();
        void set_Row(int row);
        void set_Column(int column);
};