//main.cpp
//monty hall problem
//
//
//
//
// Initial Revision: Lachlan A Smith, 2022

#include <time.h>
#include "game.h"

int main()
{

    // Random Number Seed
    srand(time(NULL)); 

    game MontyHall;

    MontyHall.Init();
    MontyHall.Run();

}