#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Maximum Array Elements of array\n";
    cout<<"---------------------------------\n\n";
    int A[7] = {1, 9, 12, -2, 32, 23, 56};
    int max = A[0];
    for(int i=0; i<7; i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }cout<<"Manimum is: "<<max;

}