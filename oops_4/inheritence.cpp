#include <iostream>
using namespace std;

class human{
    private:
    int a;

    protected:
    int b;

    public:
    int c;

    void fun(){
        a = 10;
        b = 9;
        c = 8;
    }
};

int main()
{
    human H;
    // H.a = 9;
    // H.b = 10;
    H.c = 12;

    return 0;
}