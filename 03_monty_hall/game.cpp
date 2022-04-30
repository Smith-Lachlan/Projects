// game.cpp
//
// Implementation file for the Monty Hall Problem
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "game.h"


//---------------------------------------------------------------
void game::Init()
{
    
}

//---------------------------------------------------------------
void game::Run()
{
    std::cout   << "Game Run" << std::endl;
    //player Contestant;
}

//---------------------------------------------------------------
void game::PlaceCar()
{
    //Set A Random Door as the one with a Car
    Doors[rand() % NUM_DOORS]->setCar();
}