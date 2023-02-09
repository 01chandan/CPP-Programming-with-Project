#include <iostream>
using namespace std;

int main(void)
{
    system("cls");
    int  a, b, x=10, op;
    cout<<"------------------------\n";
    cout<<"Bit-Wise Operators \n";
    cout<<"------------------------\n\n";

    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    //operations Logical AND
    op = a & b;
    cout<<op<<endl;
    //operations Logical OR
    op = a | b;
    cout<<op<<endl;
    //operations Logical X-OR
    op = a ^ b;
    cout<<op<<endl;
    //operations left-shift (1 means multiply by 2 & 2 means multiply by 4)
    op = x<<2;
    cout<<op<<endl;
    //operations right-shift  (1 means divisible by 2 & 2 means divisible by 4)
    op = x>>2;
    cout<<op<<endl;
    //operations Logical Not
    op = ~x;
    cout<<op;
    
    return 0;
}