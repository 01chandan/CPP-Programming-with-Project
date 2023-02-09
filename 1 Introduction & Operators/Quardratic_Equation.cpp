#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("cls");
    int a, b, c;
    float r1, r2;
    cout<<"--------------------------"<<endl;
    cout<<"Find Quadratic Equation"<<endl;
    cout<<"--------------------------"<<endl<<endl;

    cout<<"Enter the value to Find Quadratic Equation"<<endl;
    cout<<"--------------------------------------------"<<endl;
    // input
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    //Calculation
    r1 = (-b + sqrt (b*b - 4*a*c)) / (2*a);
    r2 = (-b - sqrt (b*b - 4*a*c)) / (2*a);

    //output
    cout<<endl<<"Outputs are: "<<endl;
    cout<<"-----------"<<endl<<endl;

    cout<<(int) r1<<endl;
    cout<<(int) r2;
    return r1;
}