#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nDynamic Allocation | C++ Programming\n";
    cout<<"-------------------------------------\n\n";
    int A[5] = {2, 5, 6, 8, 10}; //creating array on stack section in memory
    int *p = new int [5]; //creating array on Heap section in memory help of new keyword


cout<<endl<<endl;
return 0;
}