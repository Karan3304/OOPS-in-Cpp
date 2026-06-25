#include<iostream>
using namespace std;

class car{
    public:
    virtual void display(){
        cout<<"It is a car...."<<endl;
    }
};


class SportsCar : public car{
    public:
    void display(){
        cout<<"it is a sports car...."<<endl;
    }
};

int main(){

    car *c;
    c = new SportsCar();
    c->display();
    
return 0;
}