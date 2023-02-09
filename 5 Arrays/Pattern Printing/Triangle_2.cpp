#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nstar pattern | Nested - Loop\n";
    cout<<"----------------------------------------\n\n";
    int n;
    cout<<"Enter the value of n: "; cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
             if(i>j)
             {
                cout<<" ";
             }
             else
             {
                cout<<"*";
             }
        
        }
        cout<<endl;
    }
return 0;
}