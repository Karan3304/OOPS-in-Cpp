#include <iostream>
#include <cstdlib>

using namespace std;

#include "exception_class.cpp"

// Our custom version of new
void *myNew(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == nullptr)
    {
        throw BadAlloc();
    }

    return ptr;
}

int main()
{
    try
    {
        int *p = (int *)myNew(1000000000000000000);

        cout << "Memory Allocated Successfully" << endl;

        free(p);
    }
    catch (Exception &e)
    {
        cout << "Exception Occurred : "
             << e.what() << endl;
    }

    return 0;
}