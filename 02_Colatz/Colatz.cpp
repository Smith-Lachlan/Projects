// Colatz.cpp
//


#include <iostream>

#include "colatz.h"


//---------------------------------------------------------------
void colatz::colatz_printer(int num)
{   
    //Assign Private Var the number
    this->_calculatedValue = num;
    std::cout << this->_calculatedValue << std::endl;
    
    while (this->_calculatedValue > 1)
    {
        this->_calculatedValue = this->calculate_next(_calculatedValue);
        std::cout << this->_calculatedValue << std::endl;
        this->_numSteps++;
    } 

    std::cout << "Number of Iterations Taken: " << this->_numSteps << std::endl;
}

//---------------------------------------------------------------
int colatz::calculate_next(int num)
{
    switch(num % 2)
    {
        case 0:
            return (num/2);

        case 1: 
            return (3*num)+1;

        // Failure Condition - Should  never reach this
        default:
            return -1;
    }

    std::cout << "Starting Print" << std::endl;
}