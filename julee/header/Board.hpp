class Board
{
    private:
        int     _width;
        int     _height;
    
    public:
        Board();
        Board(int width, int height);
        Board(const Board & b);
        Board & operator = (const Board & b);
        ~Board();

        int     getWidth(void);
        int     getHeight(void);
};