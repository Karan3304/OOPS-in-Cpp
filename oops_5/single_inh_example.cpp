#include<iostream>
using namespace std;

class DBconnection{
    public:
    DBconnection(){
        cout<<"database connection establisded"<<endl;
    }

    ~DBconnection(){
        cout<<"database is disconnectec"<<endl;
    }
};

class Startoperation : protected DBconnection{
    public:
    Startoperation(){
        cout<<"operations started and performing..."<<endl;
    }

    ~Startoperation(){
        cout<<"data saved in database"<<endl;
    }
};

int main(){

    Startoperation k;
    
return 0;
}