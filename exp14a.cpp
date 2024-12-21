#include<iostream>
using namespace std;

inline int sum(int a , int b){
    return a+b;
}

inline int diff(int a , int b){
    return a-b;
}

inline int mul(int a , int b){
    return a*b;
}

inline int divide(int a , int b){
    return a/b;
}

int main(){
    int a, b;
    cout<<"Enter 2 Numbers : ";
    cin>>a>>b;
    cout<<"Addition : "<<sum(a,b)<<endl;
    cout<<"Difference : "<<diff(a,b)<<endl;
    cout<<"Multiplication : "<<mul(a,b)<<endl;
    cout<<"Quotient : "<<divide(a,b)<<endl;
}