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
};

class Youtuber
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
    string name;

public:
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

    YoutubeCoder K("karan", "software development", 50000);
    K.show();

    return 0;
}