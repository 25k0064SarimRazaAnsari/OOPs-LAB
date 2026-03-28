#include "iostream"
using namespace std;

//Cash
void pay(double amount){
    cout<<amount<<" Amount is payed through Cash"<<endl;
}

// Card
void pay(double amount, string cardNo, int cvv){
    cout<<"Amount: "<<amount<<endl<<"Card No: "<<cardNo<<endl<<"CVV: "<<cvv<<endl;
}

//online
void pay(double amount, string accID, string bankName){
    cout<<"Amount: "<<amount<<endl<<"Account ID: "<<accID<<endl<<"Bank Name: "<<bankName<<endl;

}


int main(){
    int choice;
    double amount;
    string cn; int cv;
    string aI; string bN;
    cout<<"1. Cash\n2. Card\n3. Online\n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Enter amount: ";
        cin>>amount;
        pay(amount);
        break;
    
    case 2:
    
        cout<<"Enter amount: ";
        cin>>amount;
        cout<<"Enter Card no: ";
        cin>>cn;
        cout<<"Enter CVV: ";
        cin>>cv;
        pay(amount,cn,cv);
        break;
    
    case 3:
    
        cout<<"Enter amount: ";
        cin>>amount;
        cout<<"Enter Account ID: ";
        cin>>aI;
        cout<<"Enter bank name ";
        cin>>bN;
        pay(amount,aI,bN);
        break;
    
    default:
        cout<<"LOL\n";
        break;
    }
}