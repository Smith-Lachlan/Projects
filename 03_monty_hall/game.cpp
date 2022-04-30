// game.cpp
//
// Implementation file for the Monty Hall Problem
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "game.h"


//---------------------------------------------------------------
void game::Init()
{
    PlaceCar();
}

//---------------------------------------------------------------
void game::Run()
{
    std::cout   << "*****MONTY HALL GAME SIMULTATION*****" << std::endl;
    GameShowHost->AskDoor();
    Contestant->ChooseDoor();
    GameShowHost->OpenDoor();

    //player Contestant;
}

//---------------------------------------------------------------
void game::PlaceCar()
{
    //Set A Random Door as the one with a Car
    Doors[rand() % NUM_DOORS]->setCar();
}