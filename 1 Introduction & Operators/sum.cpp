#include <iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"------------------------------------------\n";
    cout<<"Program Enter the Sum of Two Numbers\n";
    cout<<"-----------------------------------------";

    int a,b,c;
    cout<<"\n\n\nEnter the Value of a: ";
    cin>>a;
    cout<<"\nEnter the Value of b: ";
    cin>>b;

    //operation perform
    c = a + b;
    cout<<"\n\nThe Sum of a & b is "<<c;
    return 0;
}
