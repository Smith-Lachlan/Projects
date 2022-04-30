// host.h

#ifndef _HOST_H
#define _HOST_H

#include <iostream>
#include <vector>
#include <numeric>

#include "door.h"


//-------------------------------------------------------------------
class host
{
    public:
        host()
        {
            //std::cout << "[Ctor] : host " << std::endl;
        }

        ~host()
        {
            //std::cout << "[Dtor] : host " << std::endl;
        }

        void AskDoor();
        void AskSwitch(int closedDoor);
        int OpenDoor(int playerDoor, door** doorsList, int numDoors);
        void DetermineWinner(int doorSelection, door** doorsList);

    private:
     
};

#endif