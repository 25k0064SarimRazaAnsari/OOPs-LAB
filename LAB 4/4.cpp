#include "iostream"
using namespace std;

class Processor{
    string model;
    int speed;

    public:
    Processor(string model,int speed):model(model),speed(speed){}

    void displayProcessor(){
        cout<<"Model: "<<model<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
};

class Ram{
    int size;
    string type;

    public:
    Ram(int size, string type):size(size),type(type){}

    void displayRam(){
        cout<<"size: "<<size<<endl;
        cout<<"type: "<<type<<endl;
    }

};

class Computer{
    Processor processor;
    Ram ram;

    public:
    Computer(string model,int speed,int size,string type):processor(model,speed),ram(size,type){}

    void displayComputer(){
        processor.displayProcessor();
        ram.displayRam();
    }
};


int main(){
    Computer c("i5",3.8,8,"DDR 5");
    c.displayComputer();
}