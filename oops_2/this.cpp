#include<iostream>
using namespace std;

class customer{
    string name;
    int acc_no;
    int balance;
    
    public:
    //default constructor
    customer(){
        name = "karan";
        acc_no = 333;
        balance = 1000;
    }
    
    //parameterized constructor
    customer(string name,int acc_no,int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // constructor overloading
    customer(string a,int b){
        name = a;
        acc_no = b;
    }

    void display(){
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<balance<<endl;
        cout<<endl;
    }

};

int main(){

    customer A1;
    A1.display();
    customer A2("karan",123,1999);
    A2.display();
    customer A3("papa",666);
    A3.display();
    
return 0;
}