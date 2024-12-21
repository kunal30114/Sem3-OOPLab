#include<iostream>
using namespace std;

class c_polygon{
    protected:
    float area;

};
 class c_rectangle : public c_polygon{
    int length;
    int breadth;
    public:
    c_rectangle(int length , int breadth){
        this->length = length;
        this->breadth = breadth;
        area = length*breadth;
    }
    void display(){
        cout<<"Area of Rectangle :"<<area<<endl;
    }   
 };
 class c_triangle : public c_polygon{
    int a;
    int b;
    int c;
    public:
    c_triangle(int a , int b , int c){
        this->a = a;
        this->b = b;
        this->c = c;
        float s = (a+b+c)/2;
        area = sqrtl(s*(s - a)*(s - b)*(s - c));
    }
    void display(){
        cout<<"Area of Triangle :"<<area<<endl;
    }   
 };

 int main(){
    c_rectangle a(10,20);
    a.display();
    c_triangle b(3,4,5);
    b.display();
 }