#include <iostream>
using namespace std;

class bankAccount{
    private:
    double balance=0.0;

    public:
    void deposit(double d);
    void withdraw(double d);
    double showBalance();
};

void bankAccount::deposit(double d){
    if (d>0)
    {
        balance+=d;
    }
    else {
        cout<<"Invalid ammount "<<endl;
    }
};

void bankAccount::withdraw(double d){
    if (balance>0&&balance>=d)
    {
        balance-=d;
    }
    else cout<<"Insufficient Balance "<<endl;
    
}
double bankAccount::showBalance(){
    return balance;
}

int main(){
    int choice;
    bankAccount b1;
    double ba;

    do{
        cout<<"\n1.Deposit \n2.Withdraw\n3.Show Balance \n4. Exit : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter amount to Deposit :";
            cin>>ba;
            b1.deposit(ba);
            break;

        case 2:
            cout<<"Enter amount to Withdraw :";
            cin>>ba;
            b1.withdraw(ba);
            break;
        
        case 3:
            cout<<"The balance is :"<<b1.showBalance();
            break;
        
        case 4:
            cout<<"Exit...";
            return 0;
        
        default:
            cout<<"Enter correct option.";
            break;
        }
    }while(choice!=4);

    return 0;

}