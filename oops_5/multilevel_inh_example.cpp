#include<iostream>
using namespace std;

class man{
    protected:
    string name;

    
    public:
    man(string name){
        this->name = name;
    }

    void intro(){
        cout<<"My name is "<<name<<endl;
    }
};

class employee : protected man{
    protected:
    int empid;

    public: 

    employee(string name,int empid):man(name){
        this->empid = empid;
    }
    
    void intro(){
        cout<<"My name is "<<name<<endl;
        cout<<"my empid is "<<empid<<endl;
    }
};

class manager : protected employee{
    protected:
    string department;

    public:

    manager (string name,string department,int empid):employee(name,empid){
        this->department = department;
    }

    void intro(){
        cout<<"My name is "<<name<<endl;
        cout<<"my empid is "<<empid<<endl;
        cout<<"my department is "<<department<<endl;
    }
};

int main(){

    man m("karan");
    m.intro();

    employee e("sunil",67);
    e.intro();

    manager M("papa","cse",78);
    M.intro();
    
return 0;
}