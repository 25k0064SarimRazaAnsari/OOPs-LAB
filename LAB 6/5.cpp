#include "iostream"
using namespace std;

class Vehicle{
    public:
    virtual void startEngine(){
        cout<<"Engine of base class started!"<<endl;
    }
};


class Car:public Vehicle{
    public:
    void startEngine(){
        cout<<"Car Engine Started!"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void startEngine(){
        cout<<"Bike Engine Started!"<<endl;
    }
};
class Truck_Kun:public Vehicle{
    public:
    void startEngine(){
        cout<<"Truck Engine Started!"<<endl;
    }
};

int main(){
    Vehicle *ptr;
    Car c;
    Bike b;
    Truck_Kun k;

    ptr=&c;
    ptr->startEngine();

    ptr=&b;
    ptr->startEngine();

    ptr=&k;
    ptr->startEngine();
}

