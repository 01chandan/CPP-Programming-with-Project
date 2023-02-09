#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nPointer Introduction | C++\n";
    cout<<"--------------------------------\n\n";
    int a = 10;
    int *p = &a;
    cout<<a<<endl; // valude of a variable
    cout<<&a<<endl; //address of a variable
    cout<<p<<endl; //value of p variable is equal to &a because it carry &a
    cout<<&p<<endl; // address of p variable
    cout<<*p<<endl; //value of p pointer

cout<<endl<<endl;
return 0;
}