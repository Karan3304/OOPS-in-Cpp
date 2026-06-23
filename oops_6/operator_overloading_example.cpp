#include <iostream>
using namespace std;

class Account {
    int balance;

public:
    Account() {
        balance = 0;
    }

    Account(int balance) {
        this->balance = balance;
    }

    Account operator+(const Account &a) {
        Account temp;

        temp.balance = balance + a.balance;

        return temp;
    }

    void display() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {

    Account a1(5000);
    Account a2(7000);

    Account total = a1 + a2;

    total.display();

    return 0;
}