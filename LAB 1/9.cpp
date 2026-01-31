#include <iostream>
using namespace std;
int main(){
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter value "<<i+1<<" ";
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum is "<<sum<<endl;
    
    for (int i = 4; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}