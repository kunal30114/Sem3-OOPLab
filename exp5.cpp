#include <iostream>
using namespace std;

class friendfunc1{
    private:
    int a1, a2;
    public: 
    friendfunc1(int num1 , int num2){
        a1=num1;
        a2=num2;

    }
      friend class friendfunc2;
};

class friendfunc2{
    private:
    int a3,a4,a5;
    public:
    friendfunc2(int num3 , int num4 , int num5){
        a3=num3;
        a4=num4;
        a5=num5;
    }
  

    void display(friendfunc1 &f){
        cout<<"Average of 5 Numbers :"<<(a3+a4+a5+f.a1+f.a2)/5<<endl;
    }
};


int main() {
    vector<int> a(5);
    for (int  i = 0; i < 5; i++)
    {   cout<<"Enter "<< i+1 <<" Number : ";
        cin>>a[i];
    }
    
    friendfunc1 f1(a[0],a[1]);
    friendfunc2 f2(a[2],a[3],a[4]);
    f2.display(f1);

}
