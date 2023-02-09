#include <iostream>
using namespace std;
// by using pass by reference we swap the value using & 
 void swap(int &a, int &b)
 {
    int temp = a;
    a = b;
    b = temp;
 }
int main(void)
{
    system("cls");
    cout<<"Pass by Reference | Parameter passing\n";
    cout<<"-------------------------------------\n";
    int a = 10;
    int b = 20;
    swap(a,b); 
    cout<<a<<" "<<b; 
    cout<<endl<<endl;
    return 0;
}