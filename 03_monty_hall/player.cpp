// player.cpp
//
// Implementation file for player class for monty hal;;
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "player.h"
#include "game.h"


int player::ChooseDoor(int numDoors)
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
            std::cout << "[Host] Please Choose A Number Between 0-"<< numDoors-1 << std::endl;
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

//-------------------------------------------------------------

int playerNoSwitch::ChooseDoor(int numDoors)
{
    int selectedDoor = rand() % numDoors;
    std::cout << "[Player] Selected Door "<< selectedDoor << std::endl; 
    return ( selectedDoor ) ;
}

int playerNoSwitch::SwitchDoor(int closedDoor,int playerDoor)
{
    std::cout << "[Player] I will keep door "<< playerDoor << std::endl;
    return playerDoor;
}

int playerSwitch::ChooseDoor(int numDoors)
{
    int selectedDoor = rand() % numDoors;
    std::cout << "[Player] Selected Door "<< selectedDoor << std::endl; 
    return ( selectedDoor ) ;
}

int playerSwitch::SwitchDoor(int closedDoor,int playerDoor)
{
    std::cout << "[Player] I will switch to door "<< closedDoor << std::endl;
    return closedDoor; 
}

//-------------------------------------------------------------

int playerNoSwitch::ChooseDoorSilent(int numDoors)
{
    return ( rand() % numDoors ) ;
}

int playerNoSwitch::SwitchDoorSilent(int closedDoor,int playerDoor)
{
    return playerDoor;
}

int playerSwitch::ChooseDoorSilent(int numDoors)
{
    return (  rand() % numDoors ) ;
}

int playerSwitch::SwitchDoorSilent(int closedDoor,int playerDoor)
{
    return closedDoor; 
}