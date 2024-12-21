#include<iostream>
using namespace std;

class Employee{
    int EmpNumber;
    string EmpName;
    public:
    void getdata(int n , string name){
        EmpNumber=n;
        EmpName=name;
    }
    void display(){
        cout<<"Employee ID :"<<EmpNumber<<endl;
        cout<<"Employee Name :"<<EmpName<<endl;
    }
};

int main(){
    Employee DTU[6];
    DTU[0].getdata(1,"Kunal");
    DTU[1].getdata(2,"Mayank");
    DTU[2].getdata(3,"Manav");
    DTU[3].getdata(4,"Kanav");
    DTU[4].getdata(5,"Neal");
    DTU[5].getdata(6,"Charlie");
    for (int i = 0; i < 6; i++)
    {
        DTU[i].display();
    }
    

}