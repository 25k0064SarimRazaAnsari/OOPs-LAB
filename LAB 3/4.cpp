#include "iostream"
using namespace std;

class rectangle{

    double length;
    double width;
    const double area;

    public:
    rectangle(double l, double w) : length(l) , width(w),area(w*l){};
    
    void modifyLengthWidth(double length, double width){
     this->length=length;
     this->width=width;
    //  area=width*length; can not modify
    }

    void show(){
        cout<<"The length is "<<length<<endl;
        cout<<"The width is "<<width<<endl;
        cout<<"The area is "<<area<<endl;
    }

};

int main(){
    rectangle r(30,5);
    r.show();
}