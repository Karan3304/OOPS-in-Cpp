#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;

    public:

    customer(){
        name = "karan";
        data = new int;
        *data = 10;
        cout<<"constructor is called\n";

    }

    ~customer()
    {
        delete data;
        cout<<"destructed\n";
    }
};

int main(){
    customer A1;
return 0;
}