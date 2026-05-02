#include "iostream"
using namespace std;

/* Task 3: Friend Function with Arrays (Average & Highest Grade) Objective: Extend the
student-teacher example. Scenario: Modify the Student class to store grades in an array of size 5.
Write two friend functions: - double calculateAverage(Student& s) - double
findHighestGrade(Student& s) Requirements: - Both functions must access private grade array
directly. - In main(), create a student, input grades, and display average and highest grade.
Ensure the friend functions are not member functions of any class. */

class Student{
    string name;
    double arr[5];

    public:
        Student(string n):name(n){}

        void inputGrade(){
            for (int i = 0; i < 5; i++)
            {
                cout<<"Enter marks ["<<i+1<<"]";
                cin>>arr[i];
            }
        }
        friend double calculateAverage(Student &s);
        friend double findHighestGrade(Student &s);
};

double calculateAverage(Student &s){
    double sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=s.arr[i];
    }

    return sum/5;
    
}

double findHighestGrade(Student &s){
    double highest=s.arr[0];
    
    for (int i = 1; i < 5; i++)
    {
        if (s.arr[i]>highest)
        {
            highest=s.arr[i];
        }
    }
    return highest;
}

int main(){
    Student s("sarim");
    s.inputGrade();

    cout<<"The avg is: "<<calculateAverage(s)<<endl;
    cout<<"The highest marks is: "<<findHighestGrade(s)<<endl;

}