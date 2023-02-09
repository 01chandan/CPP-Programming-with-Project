#include <iostream>
using namespace std;

int swap(int a, int b, int temp = 0)
{
    temp = a;
    a = b;
    b = temp;
}
int main(void)
{
    system("cls");
    cout<<"Pass by Value | Parameter passing\n";
    cout<<"---------------------------------\n";
    int a = 10;
    int b = 20;
    swap(a,b); 
    cout<<a<<" "<<b; 
    cout<<endl<<endl;
    return 0;
}