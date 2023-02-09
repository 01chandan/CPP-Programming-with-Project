#include <iostream>
using namespace std;
typedef int marks;
int main(void)
{
    system("cls");
    marks m1, m2, m3;
    int Total;
    float avg;
    cout<<"Display Grades | C++ Programming\n";
    cout<<"---------------------------------\n\n";
    cout<<"Enter Marks 1: "; cin>>m1;
    cout<<"Enter Marks 2: "; cin>>m2;
    cout<<"Enter Marks 3: "; cin>>m3;

    Total = m1 + m2 + m3;
    avg = Total / 3;
    cout<<endl<<"Output:"<<endl;
    if(avg>=60)
    {
        cout<<avg<<"%, Grade is A";
    }
    else if(avg>=35)
    {
        cout<<avg<<"%, Grade is B";
    }
    else
    {
        cout<<avg<<"%, Grade is C";
    }

    return 0;

}