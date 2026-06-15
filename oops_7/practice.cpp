#include<iostream>
using namespace std;

class Exception{
    protected:
    string msg;
    public:
    virtual string what() = 0;

    virtual ~Exception() {}


};

class Low_amount_error : public Exception{
    public:
    Low_amount_error(){
        msg = "low amount Error";
    }
    string what(){
        return msg;
    }
};

class customer{
    
    string name;
    int acc_num,balance;

    public:

    customer(string name,int balance,int acc_num){
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
    }

    void deposit(int amount){
        if(amount <= 0){
            throw Low_amount_error();
        }else{
            balance+=amount;
            cout<<amount<<"rs deposited"<<endl;
        }
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"rs is withdrawed"<<endl;
        }
        else if(amount<0){
            throw Low_amount_error();
        }
        else{
            throw "low balance";
        }
    }
};

int main(){

    try{

        customer k("karan",10000,21);
        k.deposit(1000);
        k.withdraw(-12000);
    }
    catch(Low_amount_error &e){
        cout<<"Exception Occured : "<<e.what()<<endl;
    }

    
return 0;
}