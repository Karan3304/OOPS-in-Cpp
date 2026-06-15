#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void work()
    {
        cout << "working" << endl;
    }

    void display()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

class student : public human
{

    int roll_no, fees;

public:
    student(string name, int age, int roll_nuk, int fees) : human(name, age)
    {
        this->roll_no = roll_nuk;
        this->fees = fees;
    }

    void display()
    {
        cout << "name: " << name << endl;  
        cout << "age: " << age << endl;
        cout << "roll_no: " << roll_no << endl;
        cout << "fees: " << fees << endl;
    }
};

class Teacher : human
{
    int salary;

public:
    Teacher(int salary) : human("sheela", 20)
    {
        this->salary = salary;
    }

    void display()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;

        cout << "salary : " << salary << endl;
    }
};

int main()
{

    // student A1("karan", 25, 21, 10000);
    // A1.display();

    Teacher T(10000);
    T.display();

    return 0;
}