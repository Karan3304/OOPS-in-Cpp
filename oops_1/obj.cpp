#include <iostream>
using namespace std;

// p maens padding
// c d P P b b b b e e e e e e e e 
    // char c;
    // char d;
    // int b; 
    // double e;

class a
{
    char c;
    int b; 
    char d;
    double e; // cpppbbbbdpppppppeeeeeeee

    // char c;
    // int b; 
    // char d;
};

int main()
{

    a obj;
    cout << sizeof(obj) << "";
    // instead of size 5,it gives 8,here comes padding concept

    return 0;
}