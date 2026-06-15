#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout << "Payment Processing..." << endl;
    }
};

class CreditCard : public Payment
{
public:
    void pay()
    {
        cout << "Paid using Credit Card" << endl;
    }
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Paid using UPI" << endl;
    }
};

int main()
{
    Payment *p;

    CreditCard c;
    UPI u;

    p = &c;
    p->pay();

    p = &u;
    p->pay();

    return 0;
}