#include <iostream>
using namespace std;
typedef int age;
int main()
{
    system("cls");
    cout<<"Compound Conditional Statements"<<endl;
    cout<<"--------------------------------"<<endl;
    age a;
    cout<<"Enter Your age: ";
    cin>>a;
    if(a>=12 && a<=50)
    {
        cout<<"Your are Young";
    }
    else
    {
        cout<<"You are not Young";
    }

    return 0;

}