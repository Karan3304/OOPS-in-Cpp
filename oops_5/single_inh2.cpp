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
    student(string name, int age, int roll_nuk, int fees) : human(name, age) // the student constructor is calling the human constructor to initialize the name and age members of the human class,the object of the student class will first call the constructor of the human class to initialize the name and age members before initializing its own members roll_no and fees.
    {
        // this->name = name;
        // this->age = age;
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

int main()
{

    student A1("karan", 25, 21, 10000);
    A1.display();

    // if we have two display functions in both the base class and the derived class, then the display function of the derived class will be called when we call the display function using the object of the derived class. This is because the derived class has its own implementation of the display function, which overrides the display function of the base class. If we want to call the display function of the base class, we can use the scope resolution operator (::) to specify that we want to call the display function of the base class.

    return 0;
}