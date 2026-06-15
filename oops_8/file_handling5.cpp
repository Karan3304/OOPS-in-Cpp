#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f;
    f.open("pappu.txt");
    f << "hello karan bhai \n";
    f << "gm karan bhai \n";
    f << "love you karan bhai \n";
    f.close();

    ifstream fin;
    fin.open("pappu.txt");

    string line;

    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}



