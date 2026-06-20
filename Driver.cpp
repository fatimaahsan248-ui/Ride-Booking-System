#include "Driver.h"
#include<string>
using namespace std;
// Default constructor
Driver::Driver()
{
    driverId=0;
    drivername=" ";
    distance=0.0;
    available=true;
    //ctor
}

// parameterized constructor
Driver::Driver( int id, string name,double dis, bool avail)
{
    driverId=id;
    drivername=name;
    distance=dis;
    available=avail;



}
Driver::~Driver(){

}
// setter
void Driver ::Setid(int id){

driverId=id;


}

void Driver ::SetName(string name){

drivername=name;


}
void Driver ::SetDistance(double dis){

distance=dis;


}

void Driver ::SetAvailability(bool avail){

available=avail;


}
//  Getter function
int Driver ::getId()const {
 return  driverId;

}

string Driver ::getName()const{
 return  drivername;

}

double Driver ::getDistance()const{
 return  distance;

}

bool Driver ::isAvailable()const{
 return  available;

}
