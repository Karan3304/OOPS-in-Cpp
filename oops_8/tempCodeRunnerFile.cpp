#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream fin;
    
    // open the file
    fin.open("zoom.txt");

    //then read the file
    char c;
    fin>>c;

    while(!fin.eof()){
        cout<<c;
        fin>>c;
    }
    
return 0;
}