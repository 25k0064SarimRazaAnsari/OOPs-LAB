#include "iostream"
using namespace std;


/* Task 2: Friend Class (Bank Teller System) Objective: Use a friend class to allow controlled access
to private data. Scenario: Create a BankAccount class with private members: accountHolder,
balance, and pin. Create a Teller class as a friend of BankAccount. The Teller should be able to:
Display account holder name and balance (but not the PIN directly). - Deposit and withdraw money.- Validate PIN without exposing it. Requirements: - Demonstrate that a non-friend class cannot
access private members. - Show how friendship is one-way (BankAccount cannot access Teller’s
private data). */

class BankAccount{
    string accountHolder;
    double balance;
    int pin;

    public:
        BankAccount(string aH, double b,int pin):accountHolder(aH),balance(b),pin(pin){}

        friend class Teller;
};

class Teller{
    public:
    void displayAccount(BankAccount b){
        cout<<"Name: "<<b.accountHolder<<endl;
        cout<<"Balance: "<<b.balance<<endl;
    }

    void deposit(BankAccount &b, double amount){
        b.balance+=amount;
        cout<<"Deposit Successfull..."<<endl;
    }
    void withdraw(BankAccount &b, double amount){
        if (b.balance>=amount)
        {
            b.balance-=amount;
            cout<<"Withdraw Successfull..."<<endl;
        }
        else cout<<"Not Enough balance..."<<endl;
        
    }

    bool validatePin(BankAccount b, int pin){
        return (b.pin==pin);
    }


};

int main(){
    BankAccount b("Sarim",50.0,123);
    Teller t;
    t.displayAccount(b);
    t.deposit(b,10);
    t.displayAccount(b);

    t.withdraw(b,5);

    t.displayAccount(b);
}