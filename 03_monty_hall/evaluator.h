// host.h

#ifndef _EVALUATOR_H
#define _EVALUATOR_H

#include <iostream>

#include "game.h"


//-------------------------------------------------------------------
class evaluator
{
    public:
        evaluator()
        {
            //std::cout << "[Ctor] : evaluator " << std::endl;
        }

        ~evaluator()
        {
            //std::cout << "[Dtor] : evaluator " << std::endl;
        }

        void Run(int iterations);
        void RunSingleEvaluation(int iterations, player* Contestant);

    private:
     
};

#endif