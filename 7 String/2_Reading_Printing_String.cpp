#include <iostream>
using namespace std;
// Topic - String Function
//String is nothing but just a combination of Character Values.

int main(void)
{
    system("cls");
    cout<<"Reading and Printing String |String Function\n";
    cout<<"--------------------------------------------\n";

    //Read string value with space using cin.get(string name.value); or cin.getline(string name.value)
    char B[30];
    cout<<"Enter Full Name: ";
    cin.getline(B,30);   //read string with space
    cout<<"\nWelcome... "<<B;

    char name[20];
    cout<<"\nEnter Full Name: "; cin.getline(name,20);   //read single line character without space because of \0 terminate string point
    cout<<"\nWelcome... "<<name;
    cout<<endl<<endl;

    cout<<endl<<endl;
    return 0;
}