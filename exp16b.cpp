#include<iostream>
using namespace std;

class Complex;
class Sum_Calc{
    public:
    Complex sum(Complex c1, Complex c2);
};

class Complex{
    int real;
    int imaginary;

    public:
    Complex(){}
    Complex(int a , int b){
        real = a;
        imaginary = b;
    }

    friend Complex Sum_Calc::sum(Complex,Complex);

    void display(){
        cout<<"Complex Number : "<<real<<" + i "<<imaginary<<endl;
    }
};

Complex Sum_Calc::sum(Complex c1,Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main(){
    Complex c1(10,2);
    Complex c2(8,5);
    Sum_Calc s;
    Complex c3 = s.sum(c1,c2);
    c3.display();
}