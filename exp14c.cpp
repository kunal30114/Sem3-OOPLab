#include<iostream>
using namespace std;

#define sum(a,b) (a+b)
#define diff(a,b) (a-b)
#define mul(a,b) (a*b)
#define divide(a,b) (a/b)

int main(){
    int a, b;
    cout<<"Enter 2 Numbers : ";
    cin>>a>>b;
    cout<<"Addition : "<<sum(a,b)<<endl;
    cout<<"Difference : "<<diff(a,b)<<endl;
    cout<<"Multiplication : "<<mul(a,b)<<endl;
    cout<<"Quotient : "<<divide(a,b)<<endl;
}