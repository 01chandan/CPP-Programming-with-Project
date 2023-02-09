#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nArray Introduction | C++\n";
    cout<<"--------------------------------\n\n";
    int A[5] = {25, 63, 45, 78, 45};
    float B[5] = {25.01, 63.12, 45.46, 78.78, 45.15};
    char C[7] = {'C', 'H', 'A', 'N', 'D', 'A', 'N'};

    cout<<"integer Value are:\n";
    for(int i=0; i<5; i++)
    {
      cout<<A[i]<<" ";
    }
    cout<<"\n\nFloat Value are:\n";
    for(int i=0; i<5; i++)
    {
      cout<<B[i]<<" ";
    }
    cout<<"\n\nCharacter Value are:\n";
    for(int i=0; i<7; i++)
    {
      cout<<C[i]<<" ";
    }
cout<<endl<<endl;
return 0;
}