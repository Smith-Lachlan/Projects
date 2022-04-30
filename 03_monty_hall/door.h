// game.h

#ifndef _DOOR_H
#define _DOOR_H

#include <iostream>

//-------------------------------------------------------------------
// Door Class
class door
{

    public:
        door( int ID ) 
        : _ID(ID)
        {
            //std::cout << "[Ctor] : door " << _ID << std::endl;
        }

        ~door()
        {
            //std::cout << "[Dtor] : door " << _ID << std::endl;
        }

        void setCar();
        void reset();
        bool returnCar();
        int returnID(); 

    private:
        bool _Car = false;
        int _ID;
        
};

#endif