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
#define WINNER 1
#define LOSER 0

//-------------------------------------------------------------------
class game
{

    public:
        game( player* person)  : Contestant(person)
        {
            //std::cout << "[Ctor] : game " << std::endl;
            //Contestant = new player();
            //Contestant = new playerNoSwitch();
            //Contestant = new playerSwitch();

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
        
        int Run();
        void Init();


    private:
        player* Contestant;
        host* GameShowHost;
        door* Doors[NUM_DOORS];

        int _doorSelection;
        int _doorLeftShut;

        void PlaceCar();
        void Reset();
        
};

#endif