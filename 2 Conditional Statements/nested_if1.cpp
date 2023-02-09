#include <iostream>
using namespace std;
typedef int age;
int main(void)
{
    system("cls");
    cout<<"Nester-if Statement"<<endl;
    cout<<"--------------------------"<<endl<<endl;
    age a1, a2, a3;
    cout<<"Enter 3 age to find Largest: "<<endl<<endl;
    cout<<"Enter age 1: "; cin>>a1;
    cout<<"Enter age 2: "; cin>>a2;
    cout<<"Enter age 3: "; cin>>a3;
    cout<<endl<<endl;
    if(a1>a2 && a1>a3)
    {
        cout<<endl<<a1<<" is largest age";
    }
    else if (a2>a3)
    {
        cout<<a2<<" is largest age";
    }
    else
    {
        cout<<a3<<" is largest age";    
    }

    return 0;
}