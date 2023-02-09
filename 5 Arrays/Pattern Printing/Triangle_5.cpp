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
    for(i=0; i<user; i++)
    {
        for(j=0; i>j; j++)
        {   
            cout<<" ";
        }
        for(k=user; k>j; k--)
        {
            Sleep(40);
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}