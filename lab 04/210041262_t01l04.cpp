#include <iostream>
#include<string>
using namespace std;

class Flight
{
private:
    int flightNumber;
    string destination;
    float distance;
    float maxFuelCapacity;

public:
    Flight(int _flightNumber,
    string _destination,
    float _distance,
    float _maxFuelCapacity):

    flightNumber(_flightNumber),
    maxFuelCapacity(_maxFuelCapacity),
    destination(_destination),
    distance(_distance)
    {  };
    

    float CalFuel(){
        if(distance<=1000) return 500;
        if(distance>1000&&distance<=2000) return 1100;
        if(distance>2000) return 2200;
    }

    void ShowInfo(){
        cout<<"Flight number is "<<flightNumber<<endl;
        cout<<"Destination is "<<destination<<endl;
        cout<<"Distance-> "<<distance<<endl;
        cout<<"Max Fuel Capacity "<<maxFuelCapacity<<endl;
        cout<<"Fuel Required "<<CalFuel()<<" liters"<<endl;

    }
  
  

    ~Flight(){
        cout<<"The Object is Destructed"<<endl;
         cout<<"Flight number is "<<flightNumber<<endl;
    };
};





int main(void)
{
    Flight flight1(262,"Dhaka",100,1000);
  
   flight1.ShowInfo();
 
 Flight flight2(264,"Dhaka",100,1000);
    return 0;
}