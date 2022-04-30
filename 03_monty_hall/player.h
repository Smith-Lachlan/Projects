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
            std::cout << "[Ctor] : player " << std::endl;
        }

        ~player()
        {
            std::cout << "[Dtor] : player " << std::endl;
        }


        int ChooseDoor();

    private:


        
};

#endif