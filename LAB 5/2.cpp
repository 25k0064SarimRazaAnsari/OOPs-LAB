#include "iostream"
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    void setPerson(string name, int age){
        this->name=name;
        this->age=age;
    }

    void displayPerson(){
        cout<<"Name: "<<name<<" | Age: "<<age<<endl;
    }


};

class StudentPublic: public Person{
    public:
    void setPublic(string name, int age){
        setPerson(name,age);
    }
    void displayPublic(){
        displayPerson();
    }
};

class StudentProtected: protected Person{
    public:
    void setProtected(string name, int age){
        setPerson(name,age);
    }
    void displayProtected(){
        displayPerson();
    }
};

class StudentPrivate: private Person{
    public:
    void setPrivate(string name, int age){
        setPerson(name,age);
    }
    void displayPrivate(){
        displayPerson();
    }
};


int main(){
    StudentPublic s1;
    s1.setPublic("Public",1);

    StudentPrivate s2;
    s2.setPrivate("Private",2);

    StudentProtected s3;
    s3.setProtected("Protected",3);

    s1.displayPublic();
    s2.displayPrivate();
    s3.displayProtected();
}