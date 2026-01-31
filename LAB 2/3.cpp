#include <iostream>
using namespace std;

class student{
    private:
    int rollNo;
    double cgpa;

    public:
    void setData(int rollNo, double cgpa){
        this->rollNo = rollNo;
        this->cgpa = cgpa; //this will seperate class and function 
    }
    void displayData(){
        cout<<"\nThe Roll no. is "<<rollNo<<endl;
        cout<<"The cgpa is "<<cgpa<<endl;
    }

};

int main(){
    student s1;
    int rollno;
    double cgpa;

    cout<<"Enter roll no. ";
    cin>>rollno;

    cout<<"Enter CGPA ";
    cin>>cgpa;
    s1.setData(rollno,cgpa);
    s1.displayData();
    
}