#include<iostream>
using namespace std;

class customer{
    string name;
    int acc_num,balance;
    static int customer_count;
    public:
    // static int customer_count;
    customer(string name,int acc_num,int balance){
        this->name = name;
        this->acc_num = acc_num;
        this->balance=balance;
        customer_count++;
    }

    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"acc_num : "<<acc_num<<endl;
        cout<<"balance : "<<balance<<endl;
        cout<<"customer count is : "<<customer_count<<endl;
    }
};

int customer::customer_count = 0;

int main(){

    customer A1("karan",1,1000);
    A1.display();
    
    customer A2("pappu",2,2000);
    A2.display();
    customer A3("vitthal",3,3000);
    A3.display();
    // cout<<customer::customer_count<<endl;

    //we cann access static member without the object,to make it possible,put the static member in the public

    
return 0;
}