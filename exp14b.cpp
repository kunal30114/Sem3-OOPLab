#include<iostream>
using namespace std;

 int sum(int& a , int& b){
    return a+b;
}

 int diff(int& a , int& b){
    return a-b;
}

 int mul(int& a , int& b){
    return a*b;
}

 int divide(int& a , int& b){
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