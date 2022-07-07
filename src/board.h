/*
 * the board class and interface.
 */

#include <array>

typedef char PieceType;

class Spot {
	char x;
	char y;
};

// piece types
const PieceType EMPTY = 0;
const PieceType WHITE_PIECE = -1;
const PieceType WHITE_QUEEN = -2;
const PieceType BLACK_PIECE = 1;
const PieceType BLACK_QUEEN = 2;

class Board {
	private:
		std::array<std::array<PieceType, 4>, 8> arr;
	
	public:
		Board();

		PieceType get_piece(Spot s);
};


