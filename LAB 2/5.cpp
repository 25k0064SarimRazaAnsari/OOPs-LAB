#include <iostream>
using namespace std;

class employeeClass{
    private:
    string name;
    int id;

    public:
    void setNameID(string name,int id){
        this->name=name;
        this->id=id;
    }

    string getName(){
        return name;
    }
    int getID(){
        return id;
    }
};

typedef struct{
    string name;
    int id;
}employeeStruct;



int main(){
    //class: using setter and getter
    employeeClass c1;

    c1.setNameID("Sarim",1);
    cout<<"The name is "<<c1.getName()<<endl;
    cout<<"The id is "<<c1.getID()<<endl;

    //Structure:

    employeeStruct s1;

    s1.name="Rohaan";
    s1.id=2;

    cout<<"The name is "<<s1.name<<endl;
    cout<<"The id is "<<s1.id<<endl;

    return 0;

}