#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu..." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bhow Bhow..." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow Meow..." << endl;
    }
};

int main()
{

    Animal *p;
    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Cat());
    animals.push_back(new Dog());
    animals.push_back(new Animal());

    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }

    return 0;
}