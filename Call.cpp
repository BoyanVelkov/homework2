#include "Call.h"

Call::Call(unsigned int floor, unsigned int time, bool direction): Request(floor, time)
{
    setDirection(direction);
}

void Call::setDirection(bool direction)
{
    this->direction = direction;
}

bool Call::getDirection()
{
    return this->direction;
}
