// evaluator.cpp
//
// Implementation file for the Monty Hall Problem Evaluation
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "evaluator.h"


//---------------------------------------------------------------
void evaluator::Run(int iterations)
{

    //Run Iterations for Swapping
    playerSwitch AlwaysSwitch;
    playerNoSwitch NeverSwitch;
    std::cout << "~~~~~~~~~ Always Switch Strategy ~~~~~~~~~ " << std::endl;
    //RunSingleEvaluation(iterations,&AlwaysSwitch);
    int GamesWon = 0;
    int GamesPlayed = 0;

    game MontyHall_1(&AlwaysSwitch);

    for (int i = 0; i < iterations; i++)
    {
        MontyHall_1.Init();
        if(MontyHall_1.RunSilent())
        {
            GamesWon++;
        }
        GamesPlayed++;
    }

    std::cout << "Games won: "<< GamesWon << std::endl;
    std::cout << "Games played: "<< GamesPlayed << std::endl;

    float SuccessRate = (float(GamesWon)/float(GamesPlayed))*100;
    std::cout << "Success Rate: "<< SuccessRate << "%" << std::endl;

    std::cout << "~~~~~~~~~ Never Switch Strategy ~~~~~~~~~ " << std::endl;
    //RunSingleEvaluation(iterations,&AlwaysSwitch);
    GamesWon = 0;
    GamesPlayed = 0;

    game MontyHall_2(&NeverSwitch);

    for (int i = 0; i < iterations; i++)
    {
        MontyHall_2.Init();
        if(MontyHall_2.RunSilent())
        {
            GamesWon++;
        }
        GamesPlayed++;
    }

    std::cout << "Games won: "<< GamesWon << std::endl;
    std::cout << "Games played: "<< GamesPlayed << std::endl;

    SuccessRate = (float(GamesWon)/float(GamesPlayed))*100;
    std::cout << "Success Rate: "<< SuccessRate << "%" << std::endl;


}

void evaluator::RunSingleEvaluation(int iterations, player* Contestant)
{
    int GamesWon = 0;
    int GamesPlayed = 0;

    game MontyHall(Contestant);

    for (int i = 0; i < iterations; i++)
    {
        MontyHall.Init();
        if(MontyHall.RunSilent())
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