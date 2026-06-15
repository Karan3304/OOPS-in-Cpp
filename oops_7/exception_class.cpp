#ifndef EXCEPTION_CPP
#define EXCEPTION_CPP

class Exception
{
public:
    virtual const char* what() = 0;

    virtual ~Exception() {}
};

class BadAlloc : public Exception
{
public:
    const char* what()
    {
        return "Memory Allocation Failed";
    }
};

class DivideByZero : public Exception
{
public:
    const char* what()
    {
        return "Divide By Zero Error";
    }
};

class InvalidInput : public Exception
{
public:
    const char* what()
    {
        return "Invalid Input";
    }
};

#endif