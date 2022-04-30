// host.h

#ifndef _HOST_H
#define _HOST_H

#include <iostream>

//-------------------------------------------------------------------
class host
{
    public:
        host()
        {
            std::cout << "[Ctor] : host " << std::endl;
        }

        ~host()
        {
            std::cout << "[Dtor] : host " << std::endl;
        }

    private:

     
};

#endif