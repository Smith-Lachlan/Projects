// evaluator.cpp
//
// Implementation file for the Monty Hall Problem Evaluation
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "evaluator.h"


//---------------------------------------------------------------
void evaluator::Run(int iterations)
{
    
    playerSwitch AlwaysSwitch;
    game MontyHall_1(&AlwaysSwitch);

    playerNoSwitch NeverSwitch;
    game MontyHall_2(&NeverSwitch);

    //Run Iterations for Swapping
    RunSingleEvaluation(iterations,MontyHall_1);


    

    //Run Iterations for not swapping player

}

void evaluator::RunSingleEvaluation(int iterations, game MontyHall)
{
    int GamesWon = 0;
    int GamesPlayed = 0;

    for (int i = 0; i < iterations; i++)
    {
        MontyHall.Init();
        if(MontyHall.Run())
        {
            GamesWon++;
        }
        GamesPlayed++;
    }

    std::cout << "Games won: "<< GamesWon << std::endl;
    std::cout << "Games played: "<< GamesPlayed << std::endl;

    float SuccessRate = (float(GamesWon)/float(GamesPlayed))*100;
    std::cout << "Success Rate: "<< SuccessRate << "%" << std::endl;
}