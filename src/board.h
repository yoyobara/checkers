/*
 * the board class and interface.
 */

#include <array>

typedef char PieceType;

struct Spot {
	char x;
	char y;
};

// piece types
const PieceType EMPTY = 0;
const PieceType WHITE_PIECE = -1;
const PieceType WHITE_QUEEN = -2;
const PieceType BLACK_PIECE = 1;
const PieceType BLACK_QUEEN = 2;

enum AdjIndex {
	IDX_A,
	IDX_B,
	IDX_C,
	IDX_D
};

const char ROWS = 8;
const char COLUMNS = 4;
class Board {
	
	public:
		Board();

		PieceType get_piece(Spot s);
		Spot get_adjacent(Spot s, AdjIndex idx);
		void reset_pieces();
		void print();

	private:
		std::array<std::array<PieceType, COLUMNS>, ROWS> arr;
};

