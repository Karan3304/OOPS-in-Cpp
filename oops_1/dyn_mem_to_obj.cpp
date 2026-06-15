#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age,roll_num;
    string grade;

};

int main()
{
    student *S = new student;
    (*S).name="karan";
    (*S).age=56;
    (*S).roll_num=21;
    (*S).grade = "A++";

    cout<<S->name<<"";

    return 0;
}