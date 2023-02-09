#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int a, b, sum=0;
    cout<<"Compound Assignments: "<<endl;
    cout<<"-----------------------"<<endl<<endl;
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the Value of b: ";
    cin>>b;
    sum+= a + b;

    cout<<endl<<endl<<sum;
    return 0;
}