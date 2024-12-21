#include<iostream>
using namespace std;

class pntr_obj{
    int rollNo;
    string Name;

    public :
    void setData(int rollNo,string Name){
        this->rollNo = rollNo;
        this->Name= Name;
    }
    void display(){
        cout<<"Roll No.:"<<this->rollNo<<" "<<"Name :"<<this->Name<<endl;    }
};

int main(){
    pntr_obj obj1,obj2,obj3;
    obj1.setData(1,"Kunal");
    obj2.setData(2,"John");
    obj3.setData(3,"Lana");
    obj1.display();
    obj2.display();
    obj3.display();
}