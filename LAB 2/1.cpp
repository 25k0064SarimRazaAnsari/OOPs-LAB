#include <iostream>
using namespace std;

class radio{
    private:
    float frequency;
    int volume;

    public:
    void setFrequency(float f){
        frequency=f;
    }
    void setVolume(int v){
        volume=v;
    }

    void displayStatus(){
        cout<<"\nThe frequency is "<<frequency<<endl;
        cout<<"The volume is "<<volume<<endl;
    }

};


int main(){
    radio r1,r2;

    r1.setFrequency(50);
    r1.setVolume(25);
    r1.displayStatus();

    r2.setFrequency(100);
    r2.setVolume(75);
    r2.displayStatus();

}