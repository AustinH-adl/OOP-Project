#pragma once

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
