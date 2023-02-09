#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    float b, a, c, area;
    cout<<"------------------------\n";
    cout<<"Compound Assignments \n";
    cout<<"------------------------\n\n";


    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;

    //Calculation part

    area += a;
    cout<<"\n\nThe Answer is "<<area;

    area += b;
    cout<<"\n\nThe Answer is "<<area;

    area += c;
    cout<<"\n\nThe Answer is "<<area;

    return 0;
}