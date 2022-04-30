// door.cpp
//
// Implementation file for door class for monty hal;;
// Completed by: Lachlan Smith


#include <cstdlib>      // rand

#include "door.h"

//---------------------------------------------------------------
void door::setCar()
{
    _Car = true;
}

//---------------------------------------------------------------
void door::reset()
{
    _Car = false;
}
//---------------------------------------------------------------
bool door::returnCar()
{
    return _Car;
}
//---------------------------------------------------------------
int door::returnID()
{
    return _ID;
}