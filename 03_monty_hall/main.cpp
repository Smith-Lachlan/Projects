//main.cpp
//monty hall problem
//
//
//
//
// Initial Revision: Lachlan A Smith, 2022


#include "game.h"

int main()
{

    // Random Number Seed
    srand(4322); 

    game MontyHall;

    MontyHall.Init();
    MontyHall.Run();

}