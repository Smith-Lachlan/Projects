// game.h

#ifndef _GAME_H
#define _GAME_H

#include <iostream>
#include <fstream>
#include <string>

#include "host.h"
#include "player.h"
#include "door.h"

//-------------------------------------------------------------------
// Saves to CSV - Associated functions
class game
{
    public:
        game()
        {
            std::cout << "[Ctor] : game " << std::endl;
        }

        ~game()
        {
            std::cout << "[Dtor] : game " << std::endl;
        }
        void Run();
        void Init();

    private:


        
};

#endif