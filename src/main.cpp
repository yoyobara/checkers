#include "board.h"
#include <iostream>

int main(){
	Board b;
	Spot s = {.x = 0, .y = 7};

	b.print();

	Spot a = b.get_adjacent(s, 2);
	std::cout << static_cast<int>(a.x) << " " << static_cast<int>(a.y) << std::endl;
}
