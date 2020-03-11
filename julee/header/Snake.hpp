#include <list>
#include "Cell.hpp"

enum Directions {
    Up,
    Down,
    Left,
    Right,
};

class Snake
{
    private:
        int _direction;
        int _headPosX;
        int _headPosY;
        std::list<Cell> _body; 
    public:
        Snake();
        Snake(int direction);
        Snake(const Snake & s);
        Snake & operator = (const Snake & s);
        ~Snake();

        void    move();
};