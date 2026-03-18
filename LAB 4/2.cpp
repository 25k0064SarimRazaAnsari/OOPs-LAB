#include "iostream"
using namespace std;

class Book{
    const string ISBN;
    string title;

    public:

    Book(string ISBN,string title):ISBN(ISBN),title(title){}
    void displayDetail() const{
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Title: "<<title<<endl;
    }
    //Error while updating ISBN cuz of const
    // void updateISBN(const string newISBN){
    //     ISBN=newISBN;
    // }

    void updateTitle(string newTitle){
        title=newTitle;
    }

};

int  main(){
    Book b1("12345","One Piece");
    b1.displayDetail();
    Book b2("98765","Attack On Fast");
    b2.displayDetail();
    b2.updateTitle("Attack On Titan");
    cout<<"After Update : "<<endl;
    b2.displayDetail();
}
