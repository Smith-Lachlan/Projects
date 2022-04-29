// colatz.h

#ifndef _COLATZ_H
#define _COLATZ_H

//-------------------------------------------------------------------
// Calculate Numbers from an input number/s using the colatz conjecture

class colatz
{
    public:
        colatz()
        {
            //std::cout << "[Ctor] : colatz " << std::endl;
            int _numsteps = 0;
        }

        ~colatz()
        {
            //std::cout << "[Dtor] : colatz " << std::endl;
        }
        void colatz_printer(int num);
    private:
        int calculate_next(int num);
        int _calculatedValue;
        int _numSteps;
};


#endif