#include "iostream"
using namespace std;

class student{
    string name;
    double *grades;
    int size;

    public:

    student(string n,double *arr,int s){
        name=n;
        size=s;
        grades= new double[size];
        for (int i = 0; i < size; i++){
            grades[i]=arr[i];
        }
    }

    student(student &obj){
        name=obj.name;
        size=obj.size;
        grades=new double[size];
        for (int i = 0; i < size; i++){
            grades[i]=obj.grades[i];
        }
    }

    void setGrade(int index,double value){
        grades[index]=value;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Grades : ";
        for (int i = 0; i < size; i++)
        {
            cout<<grades[i]<<" ";
        }
        cout<<"\n";
        
    }

    ~student(){
        cout<<"\nDistructor Activate..."<<endl;
        delete[] grades;
    }
};

int main(){
    double sarimArr[3]={99,98,100};
    cout<<"\nStudent 1 : "<<endl;
    student s1("Sarim",sarimArr,3);
    s1.display();

    cout<<"\nStudent 2 : "<<endl;
    student s2(s1);
    s2.setGrade(1,50);
    s2.display();

    cout<<"\nStudent 1 : "<<endl;
    s1.display();
    


}