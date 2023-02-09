#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nMultiplication of Array  | 2D Array\n";
    cout<<"-----------------------------------------\n\n";
    //int 2;
 //   cout<<"Rotation: "; cin>>2;
    int A[2][2];
    int B[2][2]; 
    int C[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {   cout<<"Enter Array 1: ";
            cin>>A[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {   cout<<"Enter Array 2: ";
            cin>>B[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
             C[i][j] = A[i][j] * B[i][j];
        }
    }
        for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
             C[i][j];
        }cout<<endl;
    }
cout<<endl<<endl;
return 0;
}
// petrol pump calculation
per liter perteol 97.36
per liter desel 84.36