#include "iostream"
using namespace std;

class book{
    string title;
    string author;
    double price;

    public:
    //default:
    book(){
        title="One Piece";
        author="Eichirio Oda";
        price=50.25;
    }
    //parametrized
    book(string t,string a, double p){
        title =t;
        author=a;
        price=p;
    };

    void display(){
        cout<<"Book : "<<title<<endl;
        cout<<"Author : "<<author<<endl;
        cout<<"Price : "<<price<<endl;
    };

};

int main(){
    book b1; //default
    cout<<"\nThis is Default constructor"<<endl;
    b1.display();

    cout<<"\nThis is Prametrized constructor"<<endl;
    book b2("Harry Potter","J.K Rowling",80.50);
    b2.display();
}