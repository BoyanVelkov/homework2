#ifndef REQUEST_H
#define REQUEST_H


class Request
{
    public:
        Request(unsigned int floor, unsigned int time);
        virtual ~Request(){};

        void setFloor(unsigned int floor);
        void setTime(unsigned int time);

        unsigned int getFloor();
        unsigned int getTime();

    protected:
    private:
        unsigned int floor;
        unsigned int time;
};

#endif // REQUEST_H
