#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

// Derived from Person
class Employee : public Person {
public:
    int empId;

    void setEmpId(int id) {
        empId = id;
    }
};

// Derived from Employee
class Manager : public Employee {
public:
    string department;

    void setDepartment(string dept) {
        department = dept;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.setName("Rahul");
    m.setEmpId(101);
    m.setDepartment("IT");

    m.display();

    return 0;
}