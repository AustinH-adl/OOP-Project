#include "Position.hpp"

Position::Position(int row, int column){
    this->row = row;
    this->column = column;
}

int Position::get_Column() {
    return column;
}

int Position::get_Row() {
    return row;
}

void Position::set_Column(int column) {
    this->column = column;
}

void Position::set_Row(int row) {
    this->row = row;
}