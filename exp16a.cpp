#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

    public:
    Complex(){}
    Complex(int a , int b){
        real = a;
        imaginary = b;
    }
    friend Complex sum(Complex,Complex);
    void display(){
        cout<<"Complex Number : "<<real<<" + i "<<imaginary<<endl;
    }
};

Complex sum(Complex c1 , Complex c2){
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

int main(){
    Complex c1(10,2);
    Complex c2(8,5);
    Complex c3 = sum(c1,c2);
    c3.display();
}