enum CellType {
    Empty,
    SnakeNode,
    Food
};

class Cell {
    private:
        int _x;
        int _y;
        int _cellType;
    public:
        Cell();
        Cell(int x, int y, int cellType);
        Cell(const Cell & c);
        Cell & operator = (const Cell & c);
        ~Cell();

        void setPosX(int x);
        void setPosY(int y);
        int getPosX(void);
        int getPosY(void);
        int getCellType(void);
};