#include <iostream>
using namespace std;

// Abstract Base Class
class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0; // Pure Virtual Function

    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Credit Card payment of Rs. "
             << amount << endl;
    }
};

class UPI : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing UPI payment of Rs. "
             << amount << endl;
    }
};

class NetBanking : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Net Banking payment of Rs. "
             << amount << endl;
    }
};

int main() {

    PaymentMethod* p1 = new CreditCard();
    PaymentMethod* p2 = new UPI();
    PaymentMethod* p3 = new NetBanking();

    p1->processPayment(5000);
    p2->processPayment(2500);
    p3->processPayment(10000);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}