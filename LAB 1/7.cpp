#include <iostream>
using namespace std;

void square(int x){
    cout<<"The square is "<<x*x;
}

int main(){
    int x;
    cout<<"Enter integer ";
    cin>>x;
   
    square(x);
}