# include <iostream>
using namespace std;

int absolute(int x){
    if(x >= 0) return x;
    else return -x;
}

float absolute(float x){
    if(x >= 0.0) return x;
    else return -x;
}

int main(){
    int x;
    cout<<"Enter integer x: "; cin>>x;
    cout<<"Absolute value of x: "<<absolute(x)<<endl;
    float a;
    cout<<"Enter float a: "; cin>>a;
    cout<<"Absolute value of a: "<<absolute(a)<<endl;
}