// game.cpp
//
// Implementation file for the Monty Hall Problem
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "game.h"


//---------------------------------------------------------------
void game::Init()
{
    Reset();
    PlaceCar();
}

//---------------------------------------------------------------
int game::Run()
{
    //std::cout   << "*****MONTY HALL GAME SIMULTATION*****" << std::endl;
    GameShowHost->AskDoor();
    _doorSelection = Contestant->ChooseDoor(NUM_DOORS);
    _doorLeftShut = GameShowHost->OpenDoor(_doorSelection, Doors, NUM_DOORS);
    
    GameShowHost->AskSwitch(_doorLeftShut);
    _doorSelection = Contestant->SwitchDoor(_doorLeftShut,_doorSelection);

    

    //REVEAL ALL DOORS
    std::cout   << "What was behind each door?" << std::endl;
    for (int i = 0; i < NUM_DOORS; i++)
    {
        std::cout   << "Door #" << Doors[i]->returnID() << " = " << Doors[i]->returnCar() << std::endl;
    }
    //player Contestant;

    return GameShowHost->DetermineWinner(_doorSelection, Doors);
}

//---------------------------------------------------------------
int game::RunSilent()
{
    //std::cout   << "*****MONTY HALL GAME SIMULTATION*****" << std::endl;
    //GameShowHost->AskDoor();
    _doorSelection = Contestant->ChooseDoorSilent(NUM_DOORS);
    _doorLeftShut = GameShowHost->OpenDoorSilent(_doorSelection, Doors, NUM_DOORS);
    
    //GameShowHost->AskSwitch(_doorLeftShut);
    _doorSelection = Contestant->SwitchDoorSilent(_doorLeftShut,_doorSelection);

    return GameShowHost->DetermineWinnerSilent(_doorSelection, Doors);
}

//---------------------------------------------------------------
void game::PlaceCar()
{
    //Set A Random Door as the one with a Car
    Doors[rand() % NUM_DOORS]->setCar();
}

//
void game::Reset()
{
    //Set all door values to zero
    for (int i = 0; i < NUM_DOORS; i++)
    {
        Doors[i]->reset();
    }
}