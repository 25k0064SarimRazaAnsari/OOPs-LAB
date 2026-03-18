#include "iostream"
using namespace std;

class Author{
    string name;
    int authID;

    public:
    Author(string name,int ID):name(name),authID(ID){}

    void displayAuthor(){
        cout<<"ID: "<<authID<<" | Name: "<<name<<" | "<<endl;
    }
};

class Book{
    string title;
    Author *authors[3];
    int count;

    public:

    Book(string title):title(title){}

    void addAuthor(Author *obj){
        authors[count++]=obj;
    }

    void display(){
        for (int i = 0; i < count; i++)
        {
            authors[i]->displayAuthor();
        }
    }

};

int main(){
    Author a1("Ali",1);
    Author a2("Ahmed",2);

    Book b1("FAST");

    b1.addAuthor(&a1);
    b1.addAuthor(&a2);

    b1.display();
}


