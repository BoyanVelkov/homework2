#include "Request.h"

Request::Request(unsigned int floor, unsigned int time)
{
    setFloor(floor);
    setTime(time);
}

// seters
void Request::setFloor(unsigned int floor)
{
    this->floor = floor;
}

void Request::setTime(unsigned int time)
{
    this->time = time;
}

// geters
unsigned int Request::getFloor()
{
    return this->floor;
}

unsigned int Request::getTime()
{
    return this->time;
}
