#include <iostream>
using namespace std;

// Abstract Base Class
class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0;

    // Virtual Destructor
    virtual ~PaymentMethod() {
        cout << "PaymentMethod Destructor Called" << endl;
    }
};

class CreditCard : public PaymentMethod {
    int* data;

public:
    CreditCard() {
        data = new int[100];
        cout << "CreditCard Constructor Called" << endl;
    }

    void processPayment(double amount) override {
        cout << "Processing Credit Card payment of Rs. "
             << amount << endl;
    }

    ~CreditCard() {
        cout << "CreditCard Destructor Called" << endl;
        delete[] data;
        cout << "CreditCard Memory Freed" << endl;
    }
};

class UPI : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing UPI payment of Rs. "
             << amount << endl;
    }

    ~UPI() {
        cout << "UPI Destructor Called" << endl;
    }
};

class NetBanking : public PaymentMethod {
public:
    void processPayment(double amount) override {
        cout << "Processing Net Banking payment of Rs. "
             << amount << endl;
    }

    ~NetBanking() {
        cout << "NetBanking Destructor Called" << endl;
    }
};

int main() {

    PaymentMethod* p1 = new CreditCard();
    PaymentMethod* p2 = new UPI();
    PaymentMethod* p3 = new NetBanking();

    cout << "\n--- Processing Payments ---\n" << endl;

    p1->processPayment(5000);
    p2->processPayment(2500);
    p3->processPayment(10000);

    cout << "\n--- Deleting Objects ---\n" << endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}

//                                                 expected output
 
// CreditCard Constructor Called

// --- Processing Payments ---

// Processing Credit Card payment of Rs. 5000
// Processing UPI payment of Rs. 2500
// Processing Net Banking payment of Rs. 10000

// --- Deleting Objects ---

// CreditCard Destructor Called
// CreditCard Memory Freed
// PaymentMethod Destructor Called

// UPI Destructor Called
// PaymentMethod Destructor Called

// NetBanking Destructor Called
// PaymentMethod Destructor Called