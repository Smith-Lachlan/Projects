// game.h

#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <limits>


//-------------------------------------------------------------------
class player
{
    public:
        player()
        {
            //std::cout << "[Ctor] : player " << std::endl;
        }

        ~player()
        {
            //std::cout << "[Dtor] : player " << std::endl;
        }


        virtual int ChooseDoor(int numDoors);
        virtual int SwitchDoor(int closedDoor, int playerDoor);

        virtual int ChooseDoorSilent(int numDoors) = 0;
        virtual int SwitchDoorSilent(int closedDoor, int playerDoor) = 0;

    private:  
};

class playerNoSwitch: public player
{
    public:
        int ChooseDoor(int numDoors);
        int SwitchDoor(int closedDoor, int playerDoor);

        int ChooseDoorSilent(int numDoors);
        int SwitchDoorSilent(int closedDoor, int playerDoor);
};

class playerSwitch: public player
{
    public:
        int ChooseDoor(int numDoors);
        int SwitchDoor(int closedDoor, int playerDoor);

        int ChooseDoorSilent(int numDoors);
        int SwitchDoorSilent(int closedDoor, int playerDoor);
};
#endif