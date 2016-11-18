#ifndef GO_H
#define GO_H

#include "Request.h"

class Go: public Request
{
    public:
        Go(unsigned int floor, unsigned int time);
        virtual ~Go();
    protected:
    private:
};

#endif // GO_H
