#include <iostream>
using namespace std;

class details{

string firstName;
string surName;
int totalMarks;
string gender;
char result;

public:
details(){
    cout<<"Enter First Name :";
    cin>>firstName;
    cout<<"Enter SurName :";
    cin>>surName;
    cout<<"Enter total Marks :";
    cin>>totalMarks;
    cout<<"Type Gender :";
    cin>>gender;
    cout<<"Enter Result :";
    cin>>result;
}

void display(){
    cout<<endl<<"Your details are as follows:"<<endl;
    cout<<"Name :"<<firstName<<" "<<surName<<endl;
    cout<<"Gender : "<<gender<<endl;
    cout<<"Total Marks : "<<totalMarks<<endl;
    cout<<"Your Result status is :"<<result<<endl;

}



};

int main() {
  details d;
  d.display();
}
