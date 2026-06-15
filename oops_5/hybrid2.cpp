#include<iostream>
using namespace std;

class student{
    public:
    void print(){
        cout<<"I am student"<<endl;
    }
};


class male{
    public:
    void Maleprint(){
        cout<<"I am male "<<endl;
    }
};


class shemale{
    public:
    void shemaleprint(){
        cout<<"I am shemale "<<endl;
    }
};


class Boy : public student,public male{
    public:
    void Boyprint(){
        cout<<"I am a boy"<<endl;
    }
};

class Girl : public student,public shemale{
    public:
    void Girlprint(){
        cout<<"I am a Girl"<<endl;
    }
};

int main(){

    Girl G;
    G.Girlprint();
    G.print();
    G.shemaleprint();

    Boy B;
    B.Boyprint();
    B.Maleprint();
    B.print();
    
return 0;
}