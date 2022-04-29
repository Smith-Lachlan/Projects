// Colatz.cpp
//




#include "colatz.h"


//---------------------------------------------------------------
void colatz::colatz_printer(unsigned long long int num)
{   
    //Assign Private Var the number
    _calculatedValue = num;
    std::cout << _calculatedValue << std::endl;
    _numSteps = 0;
    
    while (_calculatedValue > 1)
    {
        _calculatedValue = calculate_next(_calculatedValue);
        std::cout << _calculatedValue << std::endl;

        _numSteps++;
    } 

    std::cout << "Number of Iterations Taken: " << this->_numSteps << std::endl;
}

void colatz::colatz_csv(unsigned long long int num)
{   

    csv csv_maker;
    csv_maker.open_csv();

    //Assign Private Var the number
    _calculatedValue = num;
    std::cout << _calculatedValue << std::endl;
    csv_maker.write_next(_calculatedValue);
    _numSteps = 0;
    
    while (_calculatedValue > 1)
    {
        _calculatedValue = calculate_next(_calculatedValue);
        std::cout << _calculatedValue << std::endl;
        csv_maker.write_next(_calculatedValue);

        _numSteps++;
    } 

    std::cout << "Number of Iterations Taken: " << _numSteps << std::endl;

    csv_maker.new_row();
    csv_maker.write_next(_numSteps);

    csv_maker.close_csv();

}

//---------------------------------------------------------------
unsigned long long int colatz::calculate_next(unsigned long long int num)
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