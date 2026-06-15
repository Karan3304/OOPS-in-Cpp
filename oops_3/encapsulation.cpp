#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_num, balance,age;
    static int customer_count;
    static int total_balance;

public:
    // static int customer_count;
    customer(string name, int acc_num, int balance,int age)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        this->age = age;
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
        else{
            cout<<"invalid amount"<<endl;
        }
    }

    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }

    void updateAge(int age){
        if(age>0 && age<100){
            this->age = age;
        }
        else{
            cout<<"invalid age"<<endl;
        }
    }

    void display()
    {
        cout << "name : " << name << endl;
        cout << "acc_num : " << acc_num << endl;
        cout << "balance : " << balance << endl;
        cout << "customer count is : " << customer_count << endl;
        cout << "customer age is : " << age << endl;
    }
};

int customer::customer_count = 0;
int customer::total_balance = 0;

int main()
{

    customer A1("karan", 1, 1000,4);
    customer A2("pappu", 2, 2000,5);
    customer A3("vitthal", 3, 3000,6);
    A1.display();//if we make the balance public,then A1.balance -= 10;
    //   we will directly access the balance,and then on display(),the balance shouwn would be
    //   990,which causes integrity issue,so we access it through function
    A1.deposit(-10);

    A1.updateAge(-2);
    A1.updateAge(20);
    A1.display();
    


    return 0;
}