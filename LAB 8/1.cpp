#include "iostream"
using namespace std;

class Person{
    string name;
    double gpa;
    public:
        void getName(string n){
            name=n;
        }

        string putName(){
            return name;
        }

        virtual void getData(double value=0.0)=0;
        virtual bool isOutstanding()=0;
};

class Student: public Person{
    double gpa;

    public:
        void getData(double value=0.0){
            gpa=value;
        }

        bool isOutstanding(){
            if (gpa>3.5) return true;
            else return false;
        }
};

class Professor: public Person{
    int publitions;

    public:
        void getData(double value=0.0){
            publitions=(int) value; //double to int
        }

        bool isOutstanding(){
            if (publitions>100) return true;
            else return false;
        }

};

int main(){

    Person*p1, *p2;
    Student s;
    p1=&s;

    Professor pro;
    p2=&pro;

    int choice;
    do
    {   
        cout<<"1. Student \t 2. Professor \t 3. Exit\n Select..... ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            int choice1;
            cout<<"1. Enter data \t 2. isOustanding \n Select..... ";
            cin>>choice1;
            switch (choice1)
            {
            case 1:
                cout<<"Enter GPA: ";
                double gpa;
                cin>>gpa;
                p1->getData(gpa);
                break;
            case 2:
                cout<<"Is person outstanding??? ";
                if (p1->isOutstanding()) cout<<"True"<<endl;
                else cout<<"False"<<endl;
                break;
            
            default:
                cout<<"Wear Glasses!...."<<endl;
                break;
            }
            break;

        case 2:
            int choice2;
            cout<<"1. Enter data \t 2. isOustanding \n Select..... ";
            cin>>choice2;
            switch (choice2)
            {
            case 1:
                cout<<"Enter Publications: ";
                int pub;
                cin>>pub;
                p2->getData(pub);
                break;
            case 2:
                cout<<"Is person outstanding??? ";
                if (p2->isOutstanding()) cout<<"True"<<endl;
                else cout<<"False"<<endl;
                break;
           
            default:
                cout<<"Wear Glasses!...."<<endl;
                break;
            }
            break;
        case 3:
            cout<<"Exiting....."<<endl;
            return 0;
        default:
                cout<<"Wear Glasses!...."<<endl;
            break;
        }
    } while (choice);
    
    
    

    

}