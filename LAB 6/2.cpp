#include "iostream"
using namespace std;

void area(int r){
    cout<<"Area of Circle is: "<<3.14*r*r<<endl;
}

void area(int a, int b){
    cout<<"Area of Square is: "<<a*b<<endl;
}

void area(float a,float b){
    cout<<"Area of Triangle is: "<<a*b*0.5<<endl;
}

int main(){
    area(5);
    area(3,2);
    area(8,2.5);
}