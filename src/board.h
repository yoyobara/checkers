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

		/*
		 *initializes board 
		 */
		Board();

		/*
		 * get a piece on the board by spot 
		 */
		PieceType& get_piece(Spot s);

		/*
		 *gets an adjacent piece on a real checkers board 
		 */
		Spot get_adjacent(Spot s, AdjIndex idx);
		
		/*
		 * get_adjacent + get_piece 
		 */
		PieceType get_adjacent_piece(Spot s, AdjIndex idx);

		/*
		 * moves a piece on the board from spot src to spot dest. (no checking
		 * or anything)
		 */
		void move_on_board(Spot src, Spot dest);

		/*
		 * resets the position of the pieces to the default 
		 */
		void reset_pieces();

		/*
		 * prints the board to the console 
		 */
		void print();

	private:

		/*
		 * representing the 8x8 checkers board using a 8x4 array. 
		 */
		std::array<std::array<PieceType, COLUMNS>, ROWS> arr;
};

