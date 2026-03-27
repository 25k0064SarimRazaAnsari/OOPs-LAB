#include "iostream"
using namespace std;

class Employee{
    int empID;
    string name;
    double salary;

    public:
    void setEmpData(int empID,string name, double salary){
        this->empID=empID;
        this->name=name;
        this->salary=salary;
    }

    void displayEmployeeData(){
        cout<<"Employee ID: "<<empID<<" | Name: "<<name<<" | Salary: "<<salary<<endl;
    }

};

class Manager : public Employee{
    string department;
    double bonus;

    public:
    void setManagerData(int empID,string name, double salary, string department,double bonus){
        setEmpData(empID,name,salary);
        this->department=department;
        this->bonus=bonus;
    }

    void displayManger(){
        displayEmployeeData();
        cout<<"Department: "<<department<<" | Bonus: "<<bonus<<endl;
    }
};

int main(){
    Manager manager;
    manager.setManagerData(1,"Sarim",10000.67,"Ethical Hacker",5000.33);
    manager.displayManger();
}