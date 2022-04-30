//main.cpp
//monty hall problem
//
//
//
//
// Initial Revision: Lachlan A Smith, 2022

#include <time.h>
#include "game.h"
#include "evaluator.h"

int main()
{

    // Random Number Seed
    srand(time(NULL)); 

    evaluator MontyHallEval;

    MontyHallEval.Run(100000);

    // player lachlan;
    // game MontyHall(&lachlan);
    // MontyHall.Init();
    // MontyHall.Run();

}