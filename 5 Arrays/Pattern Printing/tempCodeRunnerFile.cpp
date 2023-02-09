#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nSymbol Triangle | Bharat Acharya Sir | Star Pattern\n";
    cout<<"------------------------------------------------------\n\n";
    int user;
  //  cout<<"Enter the number to print stars: "; cin>>user;
    for(int i=0; i<10; i++)
    {
        for(int j=0; i>j; j++)
        {   
            cout<<"* ";
            for(int k=0; k<5; k++)
            {
                for(int m = (10 - 1); m<k; m++)
                {
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
    for(int i=0; i<10; i++)
    {
        for(int j=8; i<j; j--)
        {   
            cout<<"* ";
        }
        cout<<endl;
    }
    


return 0;
}