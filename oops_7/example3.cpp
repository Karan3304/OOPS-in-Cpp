#include <iostream>
#include <cstdlib>
using namespace std;

//======================
// Base Exception Class
//======================

class Exception
{
protected:
    string msg;

public:
    virtual string what() = 0;

    virtual ~Exception() {}
};

//======================
// Derived Exceptions
//======================

class InvalidInput : public Exception
{
public:
    InvalidInput()
    {
        msg = "Amount should be greater than zero";
    }

    string what() override
    {
        return msg;
    }
};

class Myruntime_error : public Exception
{
public:
    Myruntime_error()
    {
        msg = "Your balance is low";
    }

    string what() override
    {
        return msg;
    }
};

class BadAlloc : public Exception
{
public:
    BadAlloc()
    {
        msg = "Memory Allocation Failed";
    }

    string what() override
    {
        return msg;
    }
};

class DivideByZero : public Exception
{
public:
    DivideByZero()
    {
        msg = "Divide By Zero Error";
    }

    string what() override
    {
        return msg;
    }
};

//======================
// Custom new function
//======================

void *myNew(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == nullptr)
    {
        throw BadAlloc();
    }

    return ptr;
}

//======================
// Customer Class
//======================

class Customer
{
    string name;
    int balance;
    int acc_num;

public:
    Customer(string name, int balance, int acc_num)
    {
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            throw InvalidInput();
        }

        balance += amount;

        cout << amount << " rs is credited" << endl;
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;

            cout << amount << " rs is debited" << endl;
        }
        else if (amount <= 0)
        {
            throw InvalidInput();
        }
        else
        {
            throw Myruntime_error();
        }
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Balance : " << balance << endl;
        cout << "Account Number : " << acc_num << endl;
    }
};

//======================
// Main Function
//======================

int main()
{
    Customer c1("Karan", 5000, 101);

    // InvalidInput Exception
    try
    {
        c1.deposit(-500);
    }
    catch (Exception &e)
    {
        cout << "Exception : " << e.what() << endl;
    }

    // Runtime Error Exception
    try
    {
        c1.withdraw(10000);
    }
    catch (Exception &e)
    {
        cout << "Exception : " << e.what() << endl;
    }

    // Divide By Zero Exception
    try
    {
        int a = 10;
        int b = 0;

        if (b == 0)
        {
            throw DivideByZero();
        }

        cout << a / b << endl;
    }
    catch (Exception &e)
    {
        cout << "Exception : " << e.what() << endl;
    }

    // BadAlloc Exception
    try
    {
        size_t hugeSize = static_cast<size_t>(-1);

        int *ptr = (int *)myNew(hugeSize);

        free(ptr);
    }
    catch (Exception &e)
    {
        cout << "Exception : " << e.what() << endl;
    }

    return 0;
}