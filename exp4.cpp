#include <iostream>
using namespace std;

class bank{
    public:
    string cname ;
    int balance;
    float rate;
    
    bank(string name , int current_balance , float roi){
        cname = name;
        balance = current_balance;
        rate=roi;
    }
    
    
    void credit(int amount){
        balance+=amount;
        cout<<"Dear "<< cname << ","<<amount<<" has ben credited successfully !!"<<endl;
    }
    void debit(int amount){
        balance-=amount;
        cout<<"Dear "<< cname << ","<<amount<<" has ben debited successfully !!"<<endl;
    }
    void interest_cal(int principal , int timeperiod){
        float temp=((principal*timeperiod*rate)/100)+principal;
        cout<<"After "<<timeperiod<<" year , Your amount will be "<<temp<<"."<<endl;
    }
    void display(){
         cout<<"Dear "<< cname << ","<<"Your Account has Rs. " << balance << " !!"<<endl;
    }
    
    ~bank(){
        
        cout<<"Destructor executed !!"<<endl;
        cout<<endl;
    }
};


int main()
{   bank a1("KunalBansal" , 0 , 7);
    a1.credit(1000);
    a1.debit(100);
    a1.interest_cal(10000 ,5 );
    a1.display();
    

    return 0;
}