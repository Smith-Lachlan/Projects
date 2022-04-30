// game.h

#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <fstream>
#include <string>

#include "host.h"
#include "game.h"
#include "door.h"

//-------------------------------------------------------------------
// Saves to CSV - Associated functions
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

    private:


        
};