#include "RideSystem.h"
#include<iostream>

using namespace std;
//constructor
RideSystem::RideSystem()
{
    drivercount=0;
    loadDrivers();
}

//destructor
RideSystem::~RideSystem()
{
    //dtor
}
//load predefined drivers
void RideSystem::loadDrivers()
{
    AddDriver(101,"Ali",5.00);
    AddDriver(102,"Bilal",9.0);
    AddDriver(103,"Saim",90.0);
    AddDriver(104,"Usama",41.0);
    AddDriver(105,"Arsam",65.0);

}

// add drier
void RideSystem::AddDriver(int id,string name,double distance)
{
    Driver d(id,name,distance,true);
    driver[drivercount]=d;

    //insert distance of driver  and index in heap
    heap.insert(distance,drivercount);
    drivercount++;
}
//update  location f driver
void RideSystem::updateDriverLocation(int id,double distance)
{
    for(int i=0; i<drivercount; i++)
    {
        if(driver[i].getId() ==id)
        {
            driver[i].SetDistance(distance);
            heap.updateKey(i,distance);
            cout<<" Driver Location updated"<<endl;
            return;

        }

    }
    cout<<"Driver not found"<<endl;

}

// booking ride
void RideSystem::bookRide()
{
    if(heap.Empty())
    {
        cout<<"No drivers available,Wait"<<endl;
        q.enqueue(1);
        return;
    }
    HeapNode nearest =heap.extractMin();
    int idx=nearest.index;
    driver[idx].SetAvailability(false);
    cout<<"Ride booked with driver : "<<endl;
    cout<<"ID: "<<driver[idx].getId()<<endl;
    cout<<"Name: "<<driver[idx].getName()<<endl;
    cout<<"Distance: "<<driver[idx].getDistance()<<endl;

}

//show all driers
void RideSystem::showDriver()
{
    cout<<"----Drivers List----"<<endl;
    for(int i=0; i<drivercount; i++)
    {
        cout<<"ID : "<<driver[i].getId()<<endl;
        cout<<"Name: "<<driver[i].getName()<<endl;
        cout<<"Distance : "<<driver[i].getDistance()<<endl;
        cout<<"Available : "<<(driver[i].isAvailable()? "yes" :"No")<<endl;

    }

}
