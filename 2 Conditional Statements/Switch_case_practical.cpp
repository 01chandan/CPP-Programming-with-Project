#include <iostream>
using namespace std;
int main(void)
{
    //Practical using switch-case Creating menu bar.
    system("cls");
    cout<<"Chose one option\n";
    cout<<"------------------\n";
    cout<<"Menu\n\n";
    cout<<"1. ADD\t\t"<<"2. Subtract\n";
    cout<<"3. Multiply\t"<<"4. Quotient";
    int option;
    cout<<"\n\nOption Choosed: "; cin>>option;
    int n1,n2,c;
    cout<<"\nEnter Two Numbers: \n";
    cout<<"---------------------\n\n";
    cout<<"First number: "; cin>>n1;
    cout<<"Second Number: "; cin>>n2;

    switch(option)
    {

            case 1: c = n1 + n2;
            cout<<"\nYour Addition of two Number is: "<<c;
            break;
            case 2: c = n1 - n2;
            cout<<"\nYour Subtraction of two number is: "<<c;
            break;
            case 3: c = n1 * n2;
            cout<<"\nYour Multiplication of two number is: "<<c;
            break;
            case 4: c = n1 / n2;
            cout<<"\nYour Quotient of two Number is: "<<c;
            break;
            default: cout<<"\nYour option are not Available";
    }

}