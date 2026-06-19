#include<iostream>
using namespace std;

class DatabaseConnection
{
public:
    DatabaseConnection()
    {
        cout << "Database Connected\n";
    }

    ~DatabaseConnection()
    {
        cout << "Database Disconnected\n";
    }
};

class UserData
{
public:
    UserData()
    {
        cout << "User Data Loaded\n";
    }

    ~UserData()
    {
        cout << "Saving User Data\n";
    }
};

class Application
{
    DatabaseConnection db;
    UserData user;

public:
    Application()
    {
        cout << "Application Started\n";
    }

    ~Application()
    {
        cout << "Application Closed\n";
    }
};
int main(){
    Application app;
return 0;
}