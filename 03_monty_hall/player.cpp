// player.cpp
//
// Implementation file for player class for monty hal;;
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "player.h"
#include "game.h"


int player::ChooseDoor()
{
    int door_selection;
    for (;;) 
    {
        std::cin >> door_selection;
        if (
            std::cin.good() && 
            door_selection >= 0 && 
            door_selection <= NUM_DOORS - 1
            ) 
        {
            return door_selection;
        } 
        else 
        {
            std::cout << "[Host] Please Choose A Number Between 0-"<< NUM_DOORS - 1 << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return door_selection;
}

int player::SwitchDoor(int closedDoor,int playerDoor)
{
    char switchDoor;
    for (;;) 
    {
        std::cin >> switchDoor;
        if (
            std::cin.good() && 
            switchDoor == 'Y' || 
            switchDoor == 'N'
            ) 
            {
                break;
            }
        
        else 
            {
            std::cout << "[Host] Please select Y or N" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
    }

    if (switchDoor == 'Y')
    {
        return closedDoor;
    }
    else
    {
        return playerDoor;
    }
}