#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nTriangle ke papa | Star Pattern\n";
    cout<<"-------------------------------------\n\n";
    int user;
    cout<<"Enter the number to print stars: "; cin>>user;
    for(int i=0; i<user; i++)
    {
        for(int j=0; i>j; j++)
        {   
            Sleep(60);
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for(int i=0; i<user; i++)
    {
        for(int j=(user - 2); i<j; j--)
        {
            Sleep(10);
            cout<<"* ";
        }cout<<endl;
    }
return 0;
}