#include "board.h"

/*
 * get a spot adjacent to the given spot s
 * on a real checkers board.
 */
Spot Board::get_adjacent(Spot s, AdjIndex idx){
	// X_VALS[y % 2][idx]
	const char X_VALS[2][4] = {
		{+1, 0, 0, -1},
		{0, -1, -1, 0}
	};

	Spot ret;

	// determine delta
	if (idx == 0 || idx == 1)
		ret.y = -1;
	else
		ret.y = +1;

	ret.x = X_VALS[s.y % 2][idx];

	// add original spot
	ret.x += s.x;
	ret.y += s.y;

	return ret;
}

PieceType Board::get_adjacent_piece(Spot s, AdjIndex idx){
	return get_piece(get_adjacent(s, idx));
}
