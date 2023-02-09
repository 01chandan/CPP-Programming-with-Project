#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

void sum(int sum)
{
    sum = 100;
}
int main()
{
    system("cls"); 
    cout<<"\n Pass by Value & Reference | C++ Programming\n";
    cout<<"----------------------------------------------\n\n";
// call by reference is possible using & percent oprerator
    int a = 10;
    int &p = a;
    p = p+2;

    cout<<a<<endl; // print value of a
    cout<<p<<endl; // print value of p
    cout<<&a<<endl; // print address of a
    cout<<&p<<endl; //print address of p
// pass by value
    int i = 5;
    sum(i);
    cout<<i<<endl;

    

return 0;
}