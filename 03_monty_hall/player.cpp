// player.cpp
//
// Implementation file for player class for monty hal;;
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "player.h"


int player::ChooseDoor()
{
    int door_selection;

    for (;;) 
    {
        if (std::cin >> door_selection) 
        {
            break;
        } 
        else 
        {
            std::cout << "Invalid Input Please Enter a Number 0-2" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return door_selection;
}