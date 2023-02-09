#include <iostream>
using namespace std;
int main()
{
    system("cls");
    float b, h, area;
    cout<<"------------------------\n";
    cout<<"Area of Triangle is: \n";
    cout<<"------------------------";

    cout<<"\n\nEnter the value of Length: ";
    cin>>b;
    cout<<"Enter the value of breath: ";
    cin>>h;

    //calculation part
    area = (b * h) / 2;

    cout<<"The area of triangle is : " << area;

    return 0;
}