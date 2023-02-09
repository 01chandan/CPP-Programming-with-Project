#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    cout<<"Find Nature of Root \n";
    cout<<"----------------------\n\n";
    int a, b, c, d, r1, r2;
    cout<<"Enter the Value of a: "; cin>>a;
    cout<<"Enter the Value of b: "; cin>>b;
    cout<<"Enter the Value of c: "; cin>>c;

    d = b*b - 4*a*c;
    if(d==0)
    {
        r1 = (-b / 2*a);
        cout<<" Real and Equal: "<<endl;
        cout<<r1<<endl;
    }
    else if (d>0)
    {
        r1 = (-b + sqrt (d)) / (2*a);
        r2 = (-b - sqrt (d)) / (2*a);
        cout<<" Real & un equal:"<<endl;
        cout<<r1<<endl;
        cout<<r2<<endl;
    }
    else
    {
        cout<<" imaginary Number: ";
    }
    

    return 0;
}