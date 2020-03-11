#include "Cell.hpp"

Cell::Cell() : _x(0), _y(0), _cellType(0) {
}

Cell::Cell(int x, int y, int cellType) : _x(x), _y(y), _cellType(cellType){
}

Cell::Cell(const Cell &c) {
    _x = c._x;
    _y = c._y;
    _cellType = c._cellType;
}

Cell & Cell::operator = (const Cell & c) {
    if (this != &c) {
        _x = c._x;
        _y = c._y;
        _cellType = c._cellType;
    }
    return (*this);
}

Cell::~Cell() {
}

void Cell::setPosX(int x) {
    _x = x;
}

void Cell::setPosY(int y) {
    _y = y;
}

int Cell::getPosX(void) {
    return _x;
}

int Cell::getPosY(void) {
    return _y;
}

int Cell::getCellType(void) {
    return _cellType;
}