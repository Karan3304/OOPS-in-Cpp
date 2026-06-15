#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_num, balance;
    static int customer_count;
    static int total_balance;

public:
    // static int customer_count;
    customer(string name, int acc_num, int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        customer_count++;
        total_balance += balance;
    }

    static void acessstatic()
    {
        cout << "total number of customers are : "<<customer_count << endl;
        cout<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }

    void display()
    {
        cout << "name : " << name << endl;
        cout << "acc_num : " << acc_num << endl;
        cout << "balance : " << balance << endl;
        cout << "customer count is : " << customer_count << endl;
    }
};

int customer::customer_count = 0;
int customer::total_balance = 0;

int main()
{

    customer A1("karan", 1, 1000);
    customer A2("pappu", 2, 2000);
    customer A3("vitthal", 3, 3000);
    // A3.display();
    
    A1.deposit(650);
    customer::acessstatic();
    
    A2.withdraw(790);
    customer::acessstatic();
    


    return 0;
}