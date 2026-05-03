#include "iostream"
using namespace std;

/* In this task, you will design a payment processing system using abstraction by creating an
abstract class named Payment. This class should declare pure virtual functions such as
processPayment() and generateReceipt(), which define the general workflow for
completing a payment and issuing a receipt. You will then implement derived classes such as
CreditCard, Cash, and DigitalWallet, each providing its own version of these functions.
For instance, the CreditCard class may include validation of card details, the Cash class may
handle direct payment confirmation, and the DigitalWallet class may simulate online
transaction processing. This task demonstrates how abstraction can unify different payment
methods under a common interface while allowing flexibility in implementation. */

class Payment{
    protected:
        int id;
        double amount;
        string status;

    public:
        Payment(int id, double a):id(id),amount(a){}

        virtual void processPayment()=0;
        virtual void generateReceipt()=0;
};

class CreditCard:public Payment{
    int cNo;
    
    public:
        CreditCard(int id, double a, int cNo):Payment(id,a),cNo(cNo){}

        void processPayment(){
            cout<<"The amount $ "<<amount<<" is successfully paid!"<<endl;
            status="Paid";
        }
        void generateReceipt(){
            cout<<"ID: "<<id<<endl;
            cout<<"Account no.: "<<cNo<<endl;
            cout<<"Amount Paid: "<<amount<<endl;
            cout<<"Status: "<<status<<endl;
        }
};

class Cash:public Payment{
    
    public:
        Cash(int id, double a):Payment(id,a){}

        void processPayment(){
            cout<<"The amount $ "<<amount<<" is successfully paid!"<<endl;
            status="Paid";
        }
        void generateReceipt(){
            cout<<"ID: "<<id<<endl;
            cout<<"Amount Paid: "<<amount<<endl;
            cout<<"Status: "<<status<<endl;
        }
};

class DigitalWallet:public Payment{
    int tCode;
    public:
        DigitalWallet(int id, double a,int tCode):Payment(id,a),tCode(tCode){}

        void processPayment(){
            cout<<"The amount $ "<<amount<<" is successfully paid!"<<endl;
            status="Paid";
        }
        void generateReceipt(){
            cout<<"ID: "<<id<<endl;
            cout<<"Transaction Code: "<<tCode<<endl;
            cout<<"Amount Paid: "<<amount<<endl;
            cout<<"Status: "<<status<<endl;
        }
};

int main(){
    Payment *c=new CreditCard(123,50,456);
    Payment *cash=new Cash(123,60);
    Payment *d=new DigitalWallet(123,70,789);

    c->processPayment();
    c->generateReceipt();

    cash->processPayment();
    cash->generateReceipt();

    d->processPayment();
    d->generateReceipt();
}

