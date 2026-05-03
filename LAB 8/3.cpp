#include "iostream"
#define PI 3.14
using namespace std;

/* This task involves creating a geometry-based system using abstraction. You will define an
abstract class called Shape that includes pure virtual functions calculateArea() and
calculatePerimeter(). These functions represent general operations applicable to all
shapes but must be implemented differently depending on the type of shape. Derived classes
such as Circle, Rectangle, and Triangle should provide specific implementations based
on their respective formulas. For example, a circle will use its radius to compute area and
circumference, while a rectangle will use its length and width. This task helps illustrate how
abstraction allows a common interface for different geometric entities. */

class Shape{    
    public:
    virtual double calculateArea()=0;
    virtual double calculatePerimeter()=0;
    virtual void displayDetail()=0;

    virtual ~Shape(){
        cout<<"\n Deleting shape class\n";
    };
};

class Circle:public Shape{
    double radius;

    public:
        Circle(double r):radius(r){}

        double calculateArea(){
            return PI*radius*radius;
        }
        double calculatePerimeter(){
            return 2*PI*radius;
        }

        void displayDetail(){
            cout<<"Area: "<<calculateArea()<<endl;
            cout<<"Permiter: "<<calculatePerimeter()<<endl;
        }
};

class Rectangle:public Shape{
    protected:
    double length, width;

    public: 
        Rectangle(double l, double w):length(l),width(w){}

        double calculateArea(){
            return length*width;
        }
        double calculatePerimeter(){
            return 2*(length+width);
        }
        void displayDetail(){
            cout<<"Area: "<<calculateArea()<<endl;
            cout<<"Permiter: "<<calculatePerimeter()<<endl;
        }
};

class Triangle:public Rectangle{
    double c;
    public:
        Triangle(double l, double w,double c):Rectangle(l,w),c(c){}

        double calculateArea(){
            return length*width*0.5;
        }
        double calculatePerimeter(){
            return length+width+c;
        }
        void displayDetail(){
            cout<<"Area: "<<calculateArea()<<endl;
            cout<<"Permiter: "<<calculatePerimeter()<<endl;
        }
};

int main(){
    Shape *circle=new Circle(1);
    circle->displayDetail();

    Shape *rectangle=new Rectangle(2,3);
    rectangle->displayDetail();

    Shape *triangle=new Triangle(2,3,4);
    triangle->displayDetail();

    delete circle;
    delete rectangle;
    delete triangle;

}