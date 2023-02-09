#include <iostream>
using namespace std;
typedef int marks;

int main()
{
    system("cls");
    marks m1, m2;
    cout<<"Enter the Value of m1: ";
    cin>>m1;
    cout<<"Enter the Value of m2: ";
    cin>>m2;

    if(m1>m2)
    {
        cout<<"m1 is Greater than m2";
    }
    else
    {
        cout<<"m2 is Greater than m1";
    }
    return 0;
}