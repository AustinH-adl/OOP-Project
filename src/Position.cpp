#include "Position.h"

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

void Position::set_Column() {
    
}