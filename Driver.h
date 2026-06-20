#ifndef DRIVER_H
#define DRIVER_H
#include <string>
using namespace std;

class Driver
{
    public:
        //codrnstructor
        Driver();
        Driver(int id,string name,double dis, bool available);
        //destructor
        virtual ~Driver();
        //setter function for assigning value
        void Setid(int id);
        void SetName(string name);
        void SetDistance(double dis);
        void SetAvailability(bool avail);
        int getId()const;
        string getName()const;
        double getDistance()const;
        bool isAvailable() const;

    protected:

    private:
        int driverId;
        string drivername;
        double distance;
        bool available;
};

#endif // DRIVER_H
