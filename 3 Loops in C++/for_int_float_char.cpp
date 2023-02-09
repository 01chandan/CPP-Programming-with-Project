#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nFor Loops | int | float | char\n";
    cout<<"-----------------------------------\n\n";
    int n;
    cout<<"Enter the number: "; cin>>n;
    cout<<"\nint type |C++ Programming\n";
    cout<<"------------------------------\n\n";
    int i;
    for(i=0; i<n; i = i + 3) //i stands for itration thats why we use i for all loops in first
    {
        cout<<i;
        cout<<endl;
    }
    cout<<"\nfloat |C++ Programming\n";
    cout<<"-----------------------------\n\n";
    for(float j=0; j<n; j++)
    {
        cout<<j;
        cout<<endl;
    }
    cout<<"\nChar |C++ Programming\n";
    cout<<"---------------------------\n\n";
    for(char c='A'; c<'Z'; c++)
    {
        cout<<c<<" "<<i;
        cout<<endl;
        
    }
return 0;
}