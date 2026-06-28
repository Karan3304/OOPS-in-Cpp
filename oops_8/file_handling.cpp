#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // open the file
    ofstream fout; // fout named object is created which is of the class ofstream
    fout.open("zoom.txt");// it will open zoom.txt,and if zoom.txt is not present,then it will create it 
    fout<<"hello Karan";

    fout.close();  // resources will be released
    return 0;
}