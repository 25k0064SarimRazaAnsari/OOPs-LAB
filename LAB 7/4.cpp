#include "iostream"
using namespace std;

class Rupee{
    long value;

    public:
        Rupee(long value):value(value){}

        Rupee operator+(const Rupee& obj)const{
            return Rupee(value+obj.value);
        }

        bool operator==(Rupee obj){
            return (value==obj.value);
        }

        friend ostream& operator<<(ostream& out,Rupee obj){
            out<<obj.value;
            return out;
        }
};

int main(){
    Rupee r1(100);
    Rupee r2(50);

    Rupee total= r1+r2;
    cout<<"Total: "<<total<<endl;

    Rupee r3(100);
    Rupee equal=r1==r3;
    cout<<"Equal: "<<equal<<endl;
}