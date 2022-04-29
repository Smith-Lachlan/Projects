// colatz.cpp
//
// The Simple Maths problem we still cant solve
// 
// Program inputs
// 
// Single Argument
// Arg 1 = Mode
//  -p = print
//  -c = csv output 
//  
// Arg 2 = First Number
// Arg 3 = Second Number in range
//
// Initial revision: Lachlan A Smith, 2022
// Completed by:

#include <iostream>
#include <string>

#include "colatz.h"
#include "csv.h"

int main(int argc, char* argv[])
{
    bool csv_out = true;
    int input_number;
    colatz colatz_conjecture;
  
    switch(argc)
    {
        // No function
        case 1:
            std::cout << "1 Argument" << std::endl;
            break;
        
        //Single Number Output
        case 2:
            
            input_number = std::stoi(argv[1],nullptr);
            colatz_conjecture.colatz_printer(input_number);

            break;

        // Rangle of numbers function
        case 3:
            std::cout << "3 Argument" << std::endl;
            break;
        default:
            std::cout << "Invalid Number of Arguments (1-3 Required)" << std::endl;
            std::cout << argv[0] << std::endl;
            std::cout << "endl" << std::endl;
    }

}