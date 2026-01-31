#include <iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int main(){
    int x,y;
    cout<<"Enter integer ";
    cin>>x;
    cout<<"Enter integer ";
    cin>>y;
   
    cout<<"The sum is ="<<add(x,y);
}