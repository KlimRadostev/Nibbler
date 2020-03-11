#include "../header/Board.hpp"

Board::Board() {
    _height = 0;
    _width = 0;
}

Board::Board(int width, int height) : _width(width), _height(height){
}

Board::Board(const Board &b) {
    _width = b._width;
    _height = b._height;
}

Board & Board::operator = (const Board & b) {
    if (this != &b) {
        _width = b._width;
        _height = b._height;
    }
    return (*this);
}

Board::~Board() {
}

int Board::getWidth(void) {
    return (_width);
}

int Board::getHeight(void) {
    return (_height);
}