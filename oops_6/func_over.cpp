#include<iostream>
using namespace std;

class Area{
    public:
    int calculateArea(int r){
        return 3.14*r*r;
    }

    int calculateArea(int l,int b){
        return l*b;
    }
};

int main(){

    Area A1;
    cout<<A1.calculateArea(4)<<endl;  // on the compile time,it will be decided that circle area function will be called
    cout<<A1.calculateArea(4,5);

    // cout<<A1.calculateArea("karan");//  give error in compile time  
    
return 0;
}