#include <iostream>
using namespace std;
// by using pass by Address we swap the value using (*) pointer contain address of variable
int swap(int *a, int *b, int temp)
{
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    system("cls");
    cout<<"Pass by Address | Parameter passing\n";
    cout<<"-----------------------------------\n";
    int a = 10;
    int b = 20;
    swap(a,b); 
    cout<<a<<" "<<b; 
    cout<<endl<<endl;
    return 0;
}