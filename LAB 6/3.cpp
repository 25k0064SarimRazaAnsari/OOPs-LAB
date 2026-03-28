#include <iostream>
using namespace std;

//Here Vitual will make function dynamic, since compiler runs line by line it will skip base class funcion and calls func after that;
//"Virtual" always used in base class funct 


class Employee{

    public:
    virtual void calcSalary(double salary){
        cout<<"The salary of employee is: "<<salary<<endl;
    }
};

class Manager:public Employee{
    public:
    void calcSalary(double salary){
        cout<<"The salary of Manager is: "<<salary<<endl;
    }
};

class Developer:public Employee{
    public:
    void calcSalary(double salary){
        cout<<"The salary of Developer is: "<<salary<<endl;
    }
};

int main(){
    Employee *e,*ee;
    Manager m;
    Developer d;
    e=&m;

    e->calcSalary(5);

    ee=&d;
    ee->calcSalary(6);
    

}