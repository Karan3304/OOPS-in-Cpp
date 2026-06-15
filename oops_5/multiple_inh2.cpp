#include <iostream>
using namespace std;

class Teacher
{
public:
    string specialization;
    void work()
    {
        cout << "teacher has specialization in " << specialization << endl;
    }

    Teacher()
    {
        cout << "hello teacher" << endl;
    }
};

class Youtuber
{

public:
    int subscribers;
    void subs()
    {
        cout << "i have " << subscribers << " no of subscribers" << endl;
    }
    Youtuber()
    {
        cout << "hello Youtuber" << endl;
    }
};

class YoutubeCoder : public Teacher, public Youtuber
{
    string name;

public:
    YoutubeCoder(){
        cout<<"hello Coder karan"<<endl;
    }
    YoutubeCoder(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void show()
    {
        cout << "My name is " << name << endl;
        work();
        subs();
    }
};

int main()
{

    YoutubeCoder K;
    

    return 0;
}