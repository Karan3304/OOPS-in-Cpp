#include <iostream>
using namespace std;

class human
{
public:
    string name;

    void display(){
        cout<<"my name is "<<name<<endl;
    }
};

class Teacher : public virtual human
{
public:
    string specialization;
    void work()
    {
        cout << "teacher has specialization in " << specialization << endl;
    }
};

class Youtuber : public virtual human
{

public:
    int subscribers;
    void subs()
    {
        cout << "i have " << subscribers << " no of subscribers" << endl;
    }
};

class YoutubeCoder : public Teacher, public Youtuber
{

public:
    // YoutubeCoder(){

    // };

    int salary;
    YoutubeCoder(string name, string specialization, int subscribers, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{

    YoutubeCoder K("karan","SDE",50000,90000);
    K.display();

    return 0;
}