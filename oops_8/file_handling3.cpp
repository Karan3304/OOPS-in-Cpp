#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream fin;
    
    // open the file
    fin.open("zoom.txt");

    //then read the file
    char c;
    c = fin.get();

    while(!fin.eof()){
        cout<<c;
        c = fin.get();
    }
    
return 0;
}