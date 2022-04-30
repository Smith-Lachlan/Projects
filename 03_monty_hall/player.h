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

    private:  
};

class playerNoSwitch: public player
{
    public:
        int ChooseDoor(int numDoors);
        int SwitchDoor(int closedDoor, int playerDoor);
};

class playerSwitch: public player
{
    public:
        int ChooseDoor(int numDoors);
        int SwitchDoor(int closedDoor, int playerDoor);
};
#endif