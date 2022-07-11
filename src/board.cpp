#include "board.h"
#include <algorithm>
#include <cstdio>
#include <iterator>
#include <type_traits>
#include <iostream>

/*
 * spot comparison
 */
bool Spot::operator==(const Spot o)
{
	return x == o.x && y == o.y;
}

/*
 * spot in bound check
 */
bool Spot::in_bounds()
{
	return (0 <= x && x < COLUMNS) && (0 <= y && y < ROWS);
}

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


char PIECE_VALS[] = {'W', 'w', ' ', 'b', 'B'};
char char_val(PieceType p){
	return PIECE_VALS[p + 2];
}

/*
 * prints the board to the console. (8x8)
 */
void Board::print(){
	bool black_first = false;

	printf("=================================\n");
	for(auto row : arr){
		for (auto val : row){
			if (black_first)
				printf("| %c | @ ", char_val(val));
			else
				printf("| @ | %c ", char_val(val));
		}
		printf("|\n=================================\n");

		black_first = !black_first;

	}
}

