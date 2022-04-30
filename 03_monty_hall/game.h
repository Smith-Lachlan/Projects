// game.h

#ifndef _GAME_H
#define _GAME_H

#include <iostream>
#include <cstdlib>
#include <vector>

#include "host.h"
#include "player.h"
#include "door.h"

#define NUM_DOORS 3

//-------------------------------------------------------------------
// Saves to CSV - Associated functions
class game
{

    public:
        game()
        {
            //std::cout << "[Ctor] : game " << std::endl;
            Contestant = new player();
            GameShowHost = new host();
            for (int i = 0; i < NUM_DOORS; i++)
            {
                Doors[i] = new door(i);
            }
        }

        ~game()
        {
            //std::cout << "[Dtor] : game " << std::endl;
            delete Contestant;
            delete GameShowHost;
            for (int i = 0; i < NUM_DOORS; i++)
            {
                delete Doors[i];
            }
        }
        
        void Run();
        void Init();


    private:
        player* Contestant;
        host* GameShowHost;
        door* Doors[NUM_DOORS];

        int _doorSelection;
        int _doorLeftShut;

        void PlaceCar();
        
};

#endif