// csv.h

#ifndef _CSV_H
#define _CSV_H

#include <iostream>
#include <fstream>
#include <string>

//-------------------------------------------------------------------
// Saves to CSV - Associated functions
class csv
{
    public:
        csv()
        {
            //std::cout << "[Ctor] : csv " << std::endl;
        }

        ~csv()
        {
            //std::cout << "[Dtor] : csv " << std::endl;
        }
        void write_next(unsigned long long int num);
        void new_row();
        void open_csv();
        void close_csv();
    private:
        std::ofstream csv_file;
        std::string _delm = ",";
        std::string _delm_new_row = "\n";
        
};

#endif