#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nMirror - Triangle| Star Pattern\n";
    cout<<"-------------------------------------\n\n";
    int i, j, k, user;
    cout<<"Enter the Number: "; cin>>user;
    for(i=1; i<user; i++)
    {
        Sleep(60);
        for(j=(user - 1); i<j; j--)
        {
            cout<<" ";     
        }
        for(k=0; k<i; k++)
        {
             cout<<"*";
        }cout<<endl;
    }
return 0;
}