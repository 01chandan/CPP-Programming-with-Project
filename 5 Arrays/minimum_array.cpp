#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Maximum Array Elements of array\n";
    cout<<"---------------------------------\n\n";
    int A[7] = {1, 9, 12, -8, 32, 23, 56};
    int min = A[0];
    for(int i=0; i<7; i++)
    {
        if(min>A[i])
        {
            min = A[i];
        }
    }cout<<"Minimum is: "<<min;
return 0;
}