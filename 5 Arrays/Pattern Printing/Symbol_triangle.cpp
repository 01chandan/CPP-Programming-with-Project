#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nSymbol Triangle | Star Pattern\n";
    cout<<"------------------------------------------------------\n\n";
    int user;
    cout<<"Enter the number to print stars: "; cin>>user;
    for(int i=0; i<user; i++)
    {
        for(int j=0; i>j; j++)
        {   
            Sleep(60);
             if(i==j)
            {
                cout<<"a";
            }
            else
            {
                cout<<(char)(i + 14)<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0; i<user; i++)
    {
        for(int j=(user - 2); i<j; j--)
        {
            Sleep(10);
            if(i==j)
            {
                cout<<"a";
            }
            else
            {
                cout<<(char)(i + 14)<<"  ";
            }
        }cout<<endl;
    }
return 0;
}