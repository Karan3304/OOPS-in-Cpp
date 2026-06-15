#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no;
    int balance;

public:
    
    customer()
    {
        name = "karan";
        acc_no = 333;
        balance = 1000;
    }

    
    customer(string a, int b, int c)
    {
        name = a;
        acc_no = b;
        balance = c;
    }


    customer(string a, int b)
    {
        name = a;
        acc_no = b;
    }

    // copy const
    customer(customer &B){
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }

    void display()
    {
        cout << name << endl;
        cout << acc_no << endl;
        cout << balance << endl;
        cout << endl;
    }
};

int main()
{

    customer A1;
    A1.display();
    customer A2("karan", 123, 1999);
    A2.display();
    customer A3("papa", 666);
    A3.display();
    customer A4(A3);
    A4.display();//bydefault copy constructor is present

    // another way of copying the object
    customer A5;
    A5 = A4;
    A5.display();

    return 0;
}