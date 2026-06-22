#include <iostream>
using namespace std;

class Authentication
{
public:
    void login()
    {
        cout << "User logged in successfully." << endl;
    }
};

class Payment
{
public:
    void processPayment()
    {
        cout << "Payment processed successfully." << endl;
    }
};

class PremiumUser : public Authentication, public Payment
{
public:
    void accessPremiumContent()
    {
        cout << "Accessing Premium Content..." << endl;
    }
};

int main()
{
    PremiumUser user;

    user.login();
    user.processPayment();
    user.accessPremiumContent();

    return 0;
}