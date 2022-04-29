// colatz.h

#ifndef _COLATZ_H
#define _COLATZ_H

#include <iostream>

#include "csv.h"

//-------------------------------------------------------------------
// Calculate Numbers from an input number/s using the colatz conjecture

class colatz
{
    public:
        colatz()
        {
            //std::cout << "[Ctor] : colatz " << std::endl;
        }

        ~colatz()
        {
            //std::cout << "[Dtor] : colatz " << std::endl;
        }
        void colatz_printer(unsigned long long int num);
        void colatz_csv(unsigned long long int num);
        void colatz_multi_csv(unsigned long long int num1, unsigned long long int num2);

    private:
        unsigned long long int calculate_next(unsigned long long int num);
        unsigned long long int _calculatedValue;
        int _numSteps = 0;
};


#endif