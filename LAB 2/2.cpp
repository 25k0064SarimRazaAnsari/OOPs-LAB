#include <iostream>
using namespace std;

class car{
    private:
    int speed;

    public:
    void setSpeed(int s){
        if (s>=0&&s<=200)
        {
        speed=s;
        }
        else {
            cout<<"The speed is out of range";
            exit(1);
        }
    }
    
    int getSpeed(){
        return speed;
    }
};


int main(){
    car c1;
    int a;
    cout<<"Enter speed ";
    cin>>a;
    c1.setSpeed(a);

    cout<<"The speed is "<<c1.getSpeed();
}