#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "working" << endl;
    }

    human()
    {
        cout << "human called first" << endl;
    }

    ~human()
    {
        cout << "destructor of human called" << endl;
    }
};

class student : public human
{

    int roll_no, fees;

public:
    // student(string name, int age, int roll_nuk, int fees)
    // {
    //     this->name = name;
    //     this->roll_no = roll_nuk;
    //     this->fees = fees;
    //     this->age = age;
    // }
    student()
    {
        cout << "student called first" << endl;
    }

    ~student()
    {
        cout << "destructor of student called" << endl;
    }
};

int main()
{

    // student A1("karan", 25, 21, 10000);
    // out of the work function from the parent class or the constructor student from the chind class, which function is called first? the constructor of the parent class or the constructor of the child class?

    student A1;

    // first , the constructor of the parent class is called and then the constructor of the child class is called. because when we create an object of the child class, it first calls the constructor of the parent class to initialize the inherited members and then calls the constructor of the child class to initialize its own members.

    // first,the destructor of the child class is called and then the destructor of the parent class is called. because when an object of the child class goes out of scope or is explicitly deleted, it first calls the destructor of the child class to clean up its own resources and then calls the destructor of the parent class to clean up the inherited resources.

    return 0;
}