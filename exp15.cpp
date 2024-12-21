#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    static int total_salary;
    public:
    Employee(int id , int salary){
        this->id = id;
        this->salary = salary;
        total_salary+=salary;
    }
    static void display_totalSalary(){
        cout<<"Total Salary of 10 Employees : "<<total_salary<<endl;
    }
};

int Employee::total_salary;

int main(){
    Employee a1(1,100);
    Employee a2(2,1000);
    Employee a3(3,200);
    Employee a4(4,300);
    Employee a5(5,400);
    Employee a6(6,500);
    Employee a7(7,600);
    Employee a8(8,700);
    Employee a9(9,800);
    Employee a10(10,900);
    a1.display_totalSalary();
    


}