#include <iostream>
using namespace std;

class person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "My name is : " << name << endl;
    }
};

class Employee : public person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My monthly salary is : " << salary << endl;
    }
};

class Manager : public Employee
{
protected:
    string department;

public:
    void work()
    {
        cout << "I am working in : " << department << " department" << endl;
    }

    void introducemanager()
    {
        introduce();
        monthly_salary();
    }

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
};

int main()
{
    Manager m1("John", 5000, "IT");
    m1.introducemanager();
    m1.work();
    m1.monthly_salary();

    return 0;
}