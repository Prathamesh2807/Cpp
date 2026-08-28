#include <iostream>
using namespace std;

class complex{
    protected :
    double real ;
    double imaginary ;

    public:
    complex(){
        real = 0;
        imaginary = 0;
    }
    complex(double r , double i){
        real = r;
        imaginary = i ;
    }

    complex add(complex c){
        return complex(real + c.real,imaginary+c.imaginary);
    }
    complex sub(complex c){
        return complex(real-c.real , imaginary-c.imaginary);
    }
    complex mul(complex c){
        double r = (real * c.real) - (imaginary*c.imaginary);
        double i=(real*c.imaginary)+(imaginary*c.real);
        return complex(r,i);
    }
    void display(){
        cout<< real << "+" << imaginary << "i" <<endl;
    }


};

int main(){
    complex c1(4,3);
    complex c2(2,5);

    complex sum = c1.add(c2);
    sum.display();
    complex difference = c1.sub(c2);
    difference.display();
    complex product = c1.mul(c2);
    product.display();

    return 0;
}