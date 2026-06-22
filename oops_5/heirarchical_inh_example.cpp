#include<iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int empId;
    double salary;
};

class Manager : public Employee
{
public:
    void approveLeave() {
        cout<<"leave approved"<<endl;
    }
};

class Developer : public Employee
{
public:
    void writeCode() {
        cout<<"code written and tested"<<endl;
    }
};

class Tester : public Employee
{
public:
    void testSoftware() {
        cout<<"test successfull"<<endl;
    }
};

int main(){
    // all the m,d and t has name,empid,and salary in common members,but each hae their own responsibility
    Manager m;
    Developer d;
    Tester t;

    m.approveLeave();
    d.writeCode();
    t.testSoftware();
    
return 0;
}