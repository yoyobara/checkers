/*
 * the board class and interface.
 */

#include <array>

typedef char PieceType;

class Spot {
	public:

	char x;
	char y;

	bool operator==(const Spot o);
	bool in_bounds();
};

// piece types
const PieceType EMPTY = 0;
const PieceType WHITE_PIECE = -1;
const PieceType WHITE_QUEEN = -2;
const PieceType BLACK_PIECE = 1;
const PieceType BLACK_QUEEN = 2;

// board index. (look at doc)
typedef char AdjIndex;

const char ROWS = 8;
const char COLUMNS = 4;
class Board {
	
	public:
		Board();

		PieceType get_piece(Spot s);
		Spot get_adjacent(Spot s, AdjIndex idx);
		PieceType get_adjacent_piece(Spot s, AdjIndex idx);

		void reset_pieces();
		void print();

	private:
		std::array<std::array<PieceType, COLUMNS>, ROWS> arr;
};

