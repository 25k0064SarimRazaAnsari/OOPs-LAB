#include "iostream"
using namespace std;

class Customer;

class Account{
    int accountNo;
    double balance;

    public:
    Account(int aC, double b):accountNo(aC),balance(b){}

    friend bool verifyAccount(Account a, Customer c);
};

class Customer{
    string name;
    int accountNo;

    public:
    Customer(string name, int aC):name(name),accountNo(aC){}

    friend bool verifyAccount(Account a, Customer c);
};

bool verifyAccount(Account a, Customer c){
    if (a.accountNo==c.accountNo && a.balance>0)
    {
        return true;
    }

    else return false;
    
}

int main(){
    Account a(12345,450.25);
    Customer c("Sarim Ansari",12345);

    cout<<verifyAccount(a,c)<<endl;
}