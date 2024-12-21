#include<iostream>
using namespace std;

class Staff{
    protected:
    int id;
    string Name;
    public:
    Staff(int id , string Name){
        this->id = id;
        this->Name = Name;
    }
};

class Salary{
    protected:
    float Salary_staff;
    public:
    Salary(float amt){
        this->Salary_staff = amt;
    }
} ;

class Faculty : public Staff , public Salary {
string Department;
public:
Faculty(int id , string name , float salary , string Dep) : Staff(id , name) , Salary(salary) {
    this->Department = Dep;
    cout<<"Constructor called !!"<<endl;
}
void display(){
    cout<<id<<" "<<Name<<endl;
    cout<<"Department Name :"<<Department<<endl;
    cout<<"Salary :"<<Salary_staff<<endl;
}
};

int main(){
    Faculty Kunal(101,"Kunal_Bansal" , 100000 , "CSE");
    Kunal.display();
}