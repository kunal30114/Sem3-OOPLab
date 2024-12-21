#include<iostream>
using namespace std;

class String{
    string s;
    public:
    String(string temp){
        s=temp;
    }

    bool operator==(String s1){
        return s1.s==s;
    }
    String operator+(String s1){
        String temp=s+" "+s1.s;
        return temp;
    }
    String operator=(String s1){
        return s=s1.s;

    }
    void display(){
        cout<<s<<endl;
    }
};

int main(){
    // == operator
    String s1("Kunal");
    String s2("Bansal");
    bool ans = s1==s2;
    cout<<ans<<endl;
    // + operator
    String s3=s1+s2;
    s3.display();
    // = operater
    String s4=s1;
    s4.display();


}

