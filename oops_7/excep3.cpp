#include <iostream>
using namespace std;

int main()
{   int a,b;
    cin>>a>>b;

    try{
        if(b==0)
        throw "divide by zero is undefined ";

        int c = a/b;

        cout<<c<<endl;
    }
    catch(const char *e){
        cout<<"exception occured : "<<e<<endl;
    }

    return 0;
}