#include <iostream>
using namespace std;

class human
{
    string Religion, color;

public:
    string name;
    int age, weight;
};

// class student : private human
class student : protected human
{
private:
    int roll_num, fees;

public:
    student(string name, int age, int weight, int roll_num, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_num = roll_num;
        this->fees = fees;
    }

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "age is : " << age << endl;
        cout << "weight is : " << weight << endl;
        cout << "roll_num is : " << roll_num << endl;
        cout << "fees is : " << fees << endl;
    }
};

class Teacher: public human{
    int salary,id;
};

int main()
{

    student k("karan", 20, 67, 21, 10000);
    k.display();

    Teacher B;
    B.name = "pappu";

    return 0;
}