#include <iostream>
using namespace std;

class human
{
    string Religion, color;

public:
    string name;
    int age, weight;
};
 
// class student : public human{
// class student : protected human{
class student : private human
{
private:
    int roll_num, fees;

public:
    void fun(string n, int a, int w)
    {
        name = n;
        age = a;
        weight = w;
    }
};

int main()
{

    student k;
    k.fun("karan", 67, 45);

    return 0;
}