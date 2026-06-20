#include<iostream>
#include "RideSystem.h"
#include <string>
using namespace std;

//function will only check if string contain only digit
bool isNmbr(const string&s){
if(s.empty())
return false;
for(int i=0;s[i]!='\0';i++){
    if(s[i]<'0' || s[i]>'9')
        return false;

}
return true;


}

//convert string of digit to integer manually
int Integerconv(const string &s){
   int num=0;
   for(int i=0;s[i]!='\0';i++){
    num=num*10+(s[i]-'0');
}
     return num;
}

int main(){
   RideSystem ride;
   int choice;
   do{

    cout<<"--------Ride BookingSystem-------) "<<endl;
    cout<<"1. Show ALL Drivers"<<endl;
    cout<<"2. Book a Ride"<<endl;
    cout<<"3. Update Driver Location "<<endl;
    cout<<"4. Add new Driver"<<endl;
    cout<<"Enter your Choice: "<<endl;
    cin>>choice;

    switch(choice){
    case 1:
    ride.showDriver();
    break;
    case 2:
    ride.bookRide();
    break;
    case 3:{
   string str_id;
   cout<<"Enter Driver ID to update : "<<endl;
  cin>>str_id;
  if(!isNmbr(str_id)){
     cout<<"Invalid ID , ID must be a number"<<endl;
   break;
  }
    int id=Integerconv(str_id);
  double newDist;
 cout<<"Enter New Distance "<<endl;
   cin>>newDist;
    ride.updateDriverLocation(id,newDist);
    break;

    }


    case 4:{
        string str_id;
        cout<<"Enter Driver ID"<<endl;
        cin>>str_id;
        if(!isNmbr(str_id)){
        cout<<"Invalid ID ,ID must be a number"<<endl;
        break;

        }
       int id=Integerconv(str_id);
       string name;
       cout<<"Enter Driver Name: "<<endl;
       cin>>name;
       double distance;
       cout<<"Enter Driver Distance: "<<endl;
       cin>>distance;
       ride.AddDriver(id,name,distance);
       cout<<"Driver Added Successfully "<<endl;
       break;

}
case 0:
  cout<<"Exiting System ,Goodbye!" <<endl;
  break;
default:
    cout<<"Invalid choice.Try Again!"<<endl;
    }
  }  while(choice!=0);
        return 0;
    }
