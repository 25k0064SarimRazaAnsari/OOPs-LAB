#include "iostream"
using namespace std;

/* In this task, you will develop an employee management system using abstraction. An abstract
class named Employee should be created with functions like calculateSalary() and
displayDetails(). These functions define general behavior for employees but vary
depending on the employment type. Derived classes such as FullTimeEmployee, PartTimeEmployee, and ContractEmployee should implement these functions differently. For example, a full-time employee may have a fixed monthly salary, while a part-time employee’s salary may depend on hours worked, and a contract employee may be paid per
project. This design demonstrates how abstraction supports flexible and scalable system
development. */

class Employee{
    protected:
        string name;

    public:
        Employee(string n):name(n){}    

        virtual double calculateSalary()=0;
        virtual void displayDetail()=0;

        virtual ~Employee(){}
};

class FulltimeEmployee:public Employee{
    protected:
        double fixSalary;

    public:
        FulltimeEmployee(string n,double f):Employee(n),fixSalary(f){}
        
        double calculateSalary(){
            return fixSalary;
        }

        void displayDetail(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<calculateSalary()<<endl;
        }
};

class PartTimeEmployee:public FulltimeEmployee{ //cuz of reusablity
    int time; //in hour

    public: 
        PartTimeEmployee(string n, double f,int t):FulltimeEmployee(n,f),time(t){}

        double calculateSalary(){
            return fixSalary*time;
        }

        void displayDetail(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<calculateSalary()<<endl;
        }
};

class ContractEmployee:public FulltimeEmployee{
    int projects;

    public: 
        ContractEmployee(string n, double f,int t):FulltimeEmployee(n,f),projects(t){}

        double calculateSalary(){
            return fixSalary*projects;
        }

        void displayDetail(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<calculateSalary()<<endl;
        }

};

int main(){
    Employee *fullTime=new FulltimeEmployee("Ali",50);
    fullTime->displayDetail();

    Employee *partTime=new PartTimeEmployee("Amna",15,5);
    partTime->displayDetail();

    Employee * contractEmployee= new ContractEmployee("Ahmed",40,2);
    contractEmployee->displayDetail();

    delete fullTime;
    delete partTime;
    delete contractEmployee;
}
