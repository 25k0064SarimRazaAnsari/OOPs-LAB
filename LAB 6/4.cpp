#include "iostream"
using namespace std;

class Account{
    protected:
    double balance;

    public:
        Account(double b):balance(b){};

        virtual void calcInterest(){
            cout<<"Base Account interest"<<endl;
        }
};

class Saving:public Account{
     public:   
    Saving(double b):Account(b){}

    void calcInterest(){
        cout<<"Interest of Saving Account is: "<<balance*0.09<<endl;
    }

};

class Current:public Account{
    public:
    Current(double b):Account(b){}

    void calcInterest(){
        cout<<"Interest of Current Account is: "<<balance*0.01<<endl;
    }
};

int main(){
    Account *a;
    Saving s(5.2);
    a=&s;
    a->calcInterest();

    Current c(9);

    a=&c;
    a->calcInterest();
    

}