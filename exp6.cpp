#include <iostream>
using namespace std;

class student_details{
    private:
    string name;
    int a1, a2 , a3;
    public: 
    student_details( string s, int marks1,int marks2 , int marks3){
       name = s;
       a1=marks1;
       a2=marks2;
       a3=marks3;

    }
      friend class marks_avg;
};

class marks_avg{
    
    public:
    void display(student_details s1){
       cout<<"Student Name : "<<s1.name<<endl;
       cout<<"Average marks :"<<(s1.a1+s1.a2+s1.a3)/3<<endl;
    }
  

};


int main() {
    cout<<"Enter Student Name : "<<endl;
    string name ;
    getline(cin,name);
    vector<int> a(3);
    for (int  i = 0; i < 3; i++)
    {   cout<<"Enter Subject"<< i+1 <<" Marks : ";
        cin>>a[i];
    }
    
    student_details s1(name , a[0] , a[1] , a[2]);
    marks_avg evaluator;
    evaluator.display(s1);

}
