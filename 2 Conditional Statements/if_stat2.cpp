#include <iostream>
using namespace  std;
typedef int number;
int main(void)
{
    system ("cls");
    number n1 ,n2 ,div ,rem;
    cout<<"Enter Divident: ";
    cin>>n1;
    cout<<"Enter Divisor : ";
    cin>>n2;
    cout<<endl<<endl;

    if (n2==0)
    {
       cout<<"Divisor is not greater than ";
    }
    else
    {
        div = n1 / n2;
        rem = n1 % n2;
        cout<<"Quotient is : "<<div<<endl;  
        cout<<"Remainder : "<<rem;
    }

    return 0;
}