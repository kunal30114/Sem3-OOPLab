#include<iostream>
using namespace std;

class Num{
    int a;
    int b;

    public:
    Num(int a , int b){
        this->a=a;
        this->b=b;
    }
    bool operator!(){
        return !(a||b);

    }
    void display(){
        cout<<"Num 1 :"<<a<<endl;
        cout<<"Num 2 :"<<b<<endl;
    }
};

int main(){
    Num a(0,0);
    bool output = !a;

    a.display();
    cout<<"After Not(!) Operation :"<<output<<endl;

}