// csv.cpp
//

#include "csv.h"

//-------------------------------------------------------------------
// write number to CSV in next 
void csv::write_next(unsigned long long int num)
{
    csv_file << num;
    csv_file << _delm;
}

//-------------------------------------------------------------------
// write new row to CSV
void csv::new_row()
{
    csv_file << _delm_new_row;
}

//-------------------------------------------------------------------
// create CSV File
void csv::open_csv()
{
    csv_file.open("output.csv");
}

//-------------------------------------------------------------------
// create CSV File
void csv::close_csv()
{
    csv_file.close();
}