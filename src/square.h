#pragma once

/* a representation of a square on the board */

typedef char PieceColor;

/* colors */
static const PieceColor WHITE = -1, BLACK = 1;

class Square
{
    public:
        /* empty square constructor */
        Square();

        /* piece constructor */
        Square(PieceColor color, bool queen);

        /* make square empty */
        void empty_square();

        /* check if empty */
        bool is_empty();

        void operator = (const Square& o);

        /* make it a queen */
        void make_queen();

    private:
        bool empty;
        PieceColor color;
        bool queen;
};

