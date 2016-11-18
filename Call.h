#ifndef CALL_H
#define CALL_H

#include "Request.h"

class Call:public Request
{
    public:
        Call(unsigned int floor, unsigned int time, bool direction);
        virtual ~Call(){};

        // seter
        void setDirection(bool direction);

        //geters
        bool getDirection();
    protected:
    private:
        bool direction;
};

#endif // CALL_H
