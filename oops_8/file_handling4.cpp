#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   vector<int>arr(5);
    cout<<"Enter the input : ";
    
    for(int i=0;i<5;i++)
    cin>>arr[i];

    ofstream fwr;
    fwr.open("zero.txt");
    fwr<<"Original data : \n";

    for(int i=0;i<5;i++){
        fwr<<arr[i]<<" ";
    }

    fwr<<"Sorted data : \n";
    

    sort(arr.begin(),arr.end());

    for(int i=0;i<5;i++){
        fwr<<arr[i]<<" ";
    }
    return 0;
}