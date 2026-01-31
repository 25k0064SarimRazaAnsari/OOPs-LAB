#include <iostream>
using namespace std;
int main(){
    int arr[3][3];


    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter value for row "<<i+1<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter value ";
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"The sum of row "<<i+1<<" is "<<sum<<endl;
        sum=0;
    }

}