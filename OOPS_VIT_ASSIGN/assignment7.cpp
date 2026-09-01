#include <iostream>
using namespace std;
class Shape{
    protected : 
    double a;
    double b;

    public :
    virtual double area() = 0;

    void getData(){
        cout<<"enter the first value : "<<endl;
        cin>>a;
        cout<<"enter the second value : "<<endl;
        cin>>b;
    }

};

class Triangle : public Shape{
    public : 
    double area(){
        double ar = 0.5 * a * b ;
        return ar;
    }


};

class Rectangle : public Shape{
    public :
    double area(){
        double ar = a * b ;
        return ar;
    }

};

int main(){

    Triangle T ;
    Rectangle r ;
    Shape *ptr ;
     
    cout<< "enter the values for triangle : "<<endl;
    cout<<"--------------------TRIANGLE----------------------"<<endl;

    T.getData();
    ptr = &T ;
    cout<< "the area of triangle is : " <<ptr-> area() ;
    cout<<endl;

    cout<<"enter the values for rectangle : "<<endl;
    cout<<"--------------------RECTANGLE----------------------------"<<endl;

    r.getData();
    ptr = &r;
    cout<<"the area of rectangle : "<<ptr->area();

    return 0 ;
}