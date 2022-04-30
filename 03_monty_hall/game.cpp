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
    _doorSelection = Contestant->ChooseDoor(NUM_DOORS);
    _doorLeftShut = GameShowHost->OpenDoor(_doorSelection, Doors, NUM_DOORS);
    
    GameShowHost->AskSwitch(_doorLeftShut);
    _doorSelection = Contestant->SwitchDoor(_doorLeftShut,_doorSelection);

    GameShowHost->DetermineWinner(_doorSelection, Doors);





    // REVEAL ALL DOORS
    std::cout   << "What was behind each door?" << std::endl;
    for (int i = 0; i < NUM_DOORS; i++)
    {
        std::cout   << "Door #" << Doors[i]->returnID() << " = " << Doors[i]->returnCar() << std::endl;
    }
    //player Contestant;
}

//---------------------------------------------------------------
void game::PlaceCar()
{
    //Set A Random Door as the one with a Car
    Doors[rand() % NUM_DOORS]->setCar();
}