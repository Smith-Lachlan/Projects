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
#include <cstring>

#include "colatz.h"
#include "csv.h"

int main(int argc, char* argv[])
{
    bool csv_out = true;
    int input_number;
    int input_number_2;
    colatz colatz_conjecture;
  
    switch(argc)
    {

        //Single Number Output
        case 3:
            
            input_number = std::stoll(argv[1],nullptr);

            if (strcmp(argv[2], "-p") == 0)
            {
                colatz_conjecture.colatz_printer(input_number);
            }
            else if (strcmp(argv[2], "-c") == 0)
            {
                colatz_conjecture.colatz_csv(input_number);
            }
            else
            {
                std::cout << "Invalid arguments given <number> <arg>  [arg = -p or -c]" << std::endl;
            }
            break;

        case 4:

            input_number = std::stoll(argv[1],nullptr);
            input_number_2 = std::stoll(argv[2],nullptr);

            if (strcmp(argv[3], "-c") == 0)
            {
                std::cout << "multiline csv out" << std::endl;
                colatz_conjecture.colatz_multi_csv(input_number, input_number_2);
            }
            else
            {
                std::cout << "Invalid arguments given <number> <number2> <arg>  [arg = -c]" << std::endl;
            }
            break;


        default:
            std::cout << "Invalid Number of Arguments (1-3 Required)" << std::endl;
    }

}