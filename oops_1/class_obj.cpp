#include <iostream>
using namespace std;

class student
{
    // bydefault private
public:
    string name;
    int age, roll_num;
    string grade;
    // getter and setter function
public:
    void setname(string s)
    {
        if (s.size() == 0)
        {
            cout << "invalid name";
            return;
        }
        name = s;
    }
    void setage(int a)
    {
        age = a;
        if (age < 0 || age > 100)
        {
            cout << "invalid age";
            return;
        }
    }
    void setroll_num(int r)
    {
        roll_num = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }

    void getname()
    {
        cout << name << endl;
    }
    void getroll_num()
    {
        cout << roll_num << endl;
    }

    string getgrade(int pin)
    {
        if (pin == 123)
            return grade;
        return "";
    }
};

int main()
{
    //   student S1;
    //   S1.name = "karan";
    //   S1.age = 10;
    //   S1.roll_num = 21;
    //   S1.grade = "A+";

    //   cout<<S1.age<<"";
    //   student S2;
    //   S2.name = "arjun";
    //   S2.age = 10;
    //   S2.roll_num = 21;
    //   S2.grade = "A+";

    //   cout<<S2.name<<"";

    student S1;
    // S1.setname("karan");
    S1.setname("");
    S1.setage(10);
    S1.setroll_num(21);
    S1.setgrade("A");
    S1.getname();
    S1.getroll_num();
    cout << S1.getgrade(123);
    return 0;
}