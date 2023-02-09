#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nAddition & Subtraction  | 2D Array\n";
    cout<<"-----------------------------------------\n\n";
    int i,j,k;
    int A[2][2]; //= {{2,3},{-5,7}};
    int B[2][2]; //= {{4,6},{2,-11}};
    int C[2][2];

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {   
            cin>>A[i][j];
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {   
            cin>>B[i][j];
        }
    }
    cout<<endl<<"Output: \n\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            C[i][j] = A[i][j] + B[i][j]; // we can alse subtraction
        }
    }

    for(i=0; i<2; i++)
    {   cout<<"|";
        for(j=0; j<2; j++)
        {Sleep(60);
            cout<<C[i][j]<<"  ";
        }cout<<"|"<<endl;
    }
cout<<endl<<endl;
return 0;
}