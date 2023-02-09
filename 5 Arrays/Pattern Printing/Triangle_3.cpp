#include <iostream>

using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"star pattern | Cross Diagnol | Nested - Loop\n";
    cout<<"----------------------------------------\n\n";
    int n;
    cout<<"Enter the number: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j>n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }cout<<endl;
    }
return 0;
}