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
bool door::returnCar()
{
    return _Car;
}
