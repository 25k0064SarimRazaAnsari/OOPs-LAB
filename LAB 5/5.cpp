#include "iostream"
using namespace std;

//Note:  Diamond: 1 Grandparent → multiple parents → 1 child
//       Without virtual: child gets 2 copies → ambiguity (confusion which one to use)
//       Virtual: makes 1 shared copy of grandparent → no ambiguity
//       Rule: most derived class initializes the base (grandparent)


class Person{
    string name;
    int age;

    public:
    void setPerson(string name,int age){
        this->name=name;
        this->age=age;
    }

    void displayDetail(){
        cout<<"Name: "<<name<<" | Age: "<<age<<endl;
    }
    
};

class Teacher:virtual public Person{};

class Student:virtual public Person{};

class TeachingAssistant:public Student, public Teacher{};

int main(){
    TeachingAssistant t;
    t.setPerson("Sarim",19);
    t.displayDetail();
}