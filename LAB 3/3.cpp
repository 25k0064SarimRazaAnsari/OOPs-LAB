#include "iostream"
using namespace std;

class car{
    string model;
    int year;
    double mileage;

    public:
    car(string model, int year, double mileage){
        this->model=model;
        this->year=year;
        this->mileage=mileage;
    }

    void updateMileage(double mileage){
        this->mileage=mileage;
    }
    void display(){
        cout<<"Model : "<<model<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Mileage : "<<mileage<<endl;

    }

};

int main(){
    car c("Honda",2026,45.6);
    c.display();
    cout<<"\n\nUpdated mileage "<<endl;
    c.updateMileage(89.3);
    c.display();
}