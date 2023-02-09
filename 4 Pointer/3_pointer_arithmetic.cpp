#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nPointer Arithmetic | C++ programming\n";
    cout<<"--------------------------------------\n\n";
    int A[5] = {2,4,6,8,10};
    int *p = A;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p+2;
    cout<<*p<<endl;
return 0;
}