#include  "iostream"
using namespace std;

class University{
    string name;
    static int totalStudent;

    public:
    University(string name):name(name){
        totalStudent++;
    }

    static int getTotalStudent(){
        return totalStudent;
    }

    void displayInfo(){
        cout<<"University name: "<<name<<endl;
        cout<<"Total Student: "<<totalStudent<<endl;
    }

};

int University::totalStudent=0;

int main(){
    University s1("Fast");
    s1.displayInfo();
    University s2("NED");
    s2.displayInfo();

    cout<<endl<<"Total Students are "<<University::getTotalStudent();
}