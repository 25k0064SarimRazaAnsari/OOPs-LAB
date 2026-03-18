#include "iostream"
using namespace std;

class Student{
    static int count;
    int studentID;
    string name;
    int marks[5];

    public:
    Student(string name, int m1,int m2,int m3,int m4,int m5){
        this->name=name;
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
        marks[3]=m4;
        marks[4]=m5;

        count++;
        studentID=count;

    };

    float calcAvg(){
        float avg=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
        return avg;
    }

    void display(){
        cout<<" ID: "<<studentID<<" | "<<" Name: "<<name<<" | Avg: "<<calcAvg()<<endl;

    }
};

int Student::count=0;

int main(){
    Student s[3]= {Student("Ali",80,50,60,30,20), Student("Ahmed",80,80,80,80,80), Student("Sarim",90,95,99,75,100)};

    cout<<"All student Info: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        s[i].display();
    }

    int max=0;
    for (int i = 0; i < 3; i++)
    {
        if(s[i].calcAvg()>s[max].calcAvg()){max=i;}
    }

    cout<<"Highest Avg: ";
    s[max].display();

}