#include "iostream"
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string name,int age):name(name),age(age){};

    void displayPerson(){
        cout<<"Name: "<<name<<" | Age: "<<age<<endl;
    }
};


class Student:public Person{
    int studentID;
    string program;

    public:
    Student(string name,int age,int stdID,string program):Person(name,age) ,studentID(stdID),program(program){};

    void displayStudent(){
        displayPerson();
        cout<<"Student ID: "<<studentID<<" | Program: "<<program<<endl;
    }

};

class GraduateStudent:public Student{
    string researchTopic;
    string supervisonName;

    public:
    GraduateStudent(string name,int age,int stdID,string program,string rT,string sN): Student(name,age,stdID,program),researchTopic(rT),supervisonName(sN){};

    void displayGraduate(){
        displayStudent();
        cout<<"Research Topic: "<<researchTopic<<" | Supervisor name: "<<supervisonName<<endl;
    };
    
};

int main(){
    GraduateStudent Sarim("Sarim",19,1,"AI","AI in CY", "Sir Talha");
    
    Sarim.displayGraduate();
    
}