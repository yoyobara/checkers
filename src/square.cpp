#include "square.h"

Square::Square()
{
    empty_square();
}

Square::Square(PieceColor color, bool queen) : empty(false), color(color), queen(queen) {}

void Square::empty_square()
{
    empty = true;
}

bool Square::is_empty()
{
    return empty;
}

void Square::make_queen()
{
    queen = true;
}

void Square::operator=(const Square& o)
{
    empty = o.empty;
    queen = o.queen;
    color = o.color;
}
