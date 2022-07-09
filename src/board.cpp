#include "board.h"
#include <algorithm>

/*
 * initializes the board
 */
Board::Board()
{
	reset_pieces();
}

/*
 * gets a piece on the board by its spot
 */
PieceType Board::get_piece(Spot s){
	return arr.at(s.y).at(s.x);
}

/*
 * resets the position of the pieces on the board
 */
void Board::reset_pieces(){

	// init board array with zeros (empty)
	arr.fill({});
	
	// fill white pieces
	for (auto it = arr.rbegin(); it != arr.rbegin() + 3; it++){
		it->fill(WHITE_PIECE);	
	}

	// fill black pieces
	for (auto it = arr.begin(); it != arr.begin() + 3; it++){
		it->fill(BLACK_PIECE);	
	}
}

/*
 * prints the board to the console. (8x8)
 */
void print(){
}
