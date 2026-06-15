#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C {
public:
    void showC() {
        cout << "Class C\n";
    }
};

// Hybrid inheritance (B inherits A, and D inherits both B and C)
class D : public B, public C {
public:
    void showD() {
        cout << "Class D\n";
    }
};

int main() {
    D obj;
    obj.showA();  // from A
    obj.showB();  // from B
    obj.showC();  // from C
    obj.showD();  // from D
    return 0;
}