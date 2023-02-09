#include <iostream>
using namespace std;

int add(int num1, int num2)// function is a group of codes which perform specific task
{                               // Ex- Add, Sub etc.
    int add = num1 + num2;
    return add;
}

float add(float num1, float num2) // user function always declare before main function.
{                           //note: if we declare after main fuction code not worked
    float add = num1 + num2;
    return add;
}

int add(int num1, int num2, int num3) // we make same function but make sure parameter is different
{                    
    return num1 + num2 + num3; // note: this type of representation is allowed in functions
}
int main(void)
{
    system("cls"); 
    cout<<"\nFunction | C++ Programming\n";
    cout<<"----------------------------\n\n";
    float user1, user2, user3;
    cout<<"Enter Number 1: "; cin>>user1;
    cout<<"\nEnter Number 2: "; cin>>user2;
    cout<<"\nEnter Number 3: "; cin>>user3;
    cout<<"\n\nInt [2 Para]     | Sum: "<<add((int)user1,(int) user2)<<endl;
    cout<<"float [2 Para]   | Sum: "<<add(user1,user2)<<endl;
    cout<<"Int [3 Para]     | Sum: "<<add(user1, user2, user3)<<endl;

cout<<endl<<endl;
return 0;
}