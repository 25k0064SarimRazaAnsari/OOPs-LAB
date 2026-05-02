#include <iostream>
#include <string>
using namespace std;

class Book;
class Member;
class Librarian;

void applyDiscount(Book &b, float percent);

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book(string t = "", string a = "", float p = 0) {
        title = t;
        author = a;
        price = p;
    }

    bool operator==(Book b) {
        return (title == b.title);
    }

    friend ostream& operator<<(ostream &out, Book b) {
        out << "Title: " << b.title
            << ", Author: " << b.author
            << ", Price: Rs. " << b.price;
        return out;
    }
    friend class Librarian;
    friend void applyDiscount(Book &b, float percent);
};




class Member {
private:
    string name;
    string borrowedBookTitle;

public:
    Member(string n = "") {
        name = n;
        borrowedBookTitle = "None";
    }

    friend class Librarian;
};

class Librarian {
public:
    void displayBooks(Book books[], int size) {
        cout << "\n--- Library Books ---\n";
        for (int i = 0; i < size; i++) {
            cout << books[i] << endl;
        }
    }

    void borrowBook(Member &m, Book books[], int size, string wantedTitle) {
        for (int i = 0; i < size; i++) {
            if (books[i].title == wantedTitle) {
                m.borrowedBookTitle = wantedTitle;
                cout << m.name << " borrowed \"" << wantedTitle << "\"\n";
                return;
            }
        }

        cout << "Book not found.\n";
    }

    void showMember(Member &m) {
        cout << "\nMember Name: " << m.name << endl;
        cout << "Borrowed Book: " << m.borrowedBookTitle << endl;
    }
};

void applyDiscount(Book &b, float percent) {
    b.price = b.price - (b.price * percent / 100);
    cout << "\nDiscount applied on " << b.title << endl;
}

class AssistantLibrarian : public Librarian {
public:
    void tryAccess(Book &b) {
        // Not allowed:
        // cout << b.title;
        cout << "\nAssistantLibrarian cannot access Book private data directly.\n";
    }
};

int main() {
    Book books[3] = {
        Book("C++ Basics", "Ali", 1000),
        Book("OOP Concepts", "Ahmed", 1500),
        Book("Data Structures", "Sara", 2000)
    };

    Member m1("Sarim");
    Librarian lib;
    AssistantLibrarian a;

    lib.displayBooks(books, 3);

    lib.borrowBook(m1, books, 3, "OOP Concepts");
    lib.showMember(m1);
    
    if (books[0] == Book("C++ Basics", "", 0))
        cout << "\nBook titles are same.\n";

    applyDiscount(books[1], 20);

    lib.displayBooks(books, 3);

    a.tryAccess(books[0]);

    return 0;
}