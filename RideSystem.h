#ifndef RIDESYSTEM_H
#define RIDESYSTEM_H
#include "DRIVER.h"
#include "MinHeap.h"
#include "Queue.h"
# include<string>

class RideSystem
{
    public:
        //constructor
        RideSystem();
        //destructor
        virtual ~RideSystem();
        //add driver
        void AddDriver(int id,string name,double distance);
        //update driver
        void updateDriverLocation(int id,double distance);
        //booking ride
        void bookRide();
        // show all driver
        void showDriver();
    protected:

    private:
        Driver driver[200];
        int drivercount;
        MinHeap heap;
        Queue q;
        void loadDrivers();

};

#endif // RIDESYSTEM_H
