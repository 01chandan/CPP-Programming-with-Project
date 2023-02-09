#include <iostream>
#include <windows.h>
using namespace std;

float add(float num1, float num2); // we have to define function parameter before main function
int main()
{
    //we use function prototpye when we want to use function after main function
    system("cls"); 
    cout<<"\nFunction | C++ Programming\n";
    cout<<"----------------------------\n\n";
    float user1, user2;
    cout<<"Enter Number 1: "; cin>>user1;
    cout<<"\nEnter Number 2: "; cin>>user2;         
    cout<<"\n\nResult | Sum: "<<add(user1, user2);
cout<<endl<<endl;
return 0;
}
//here is another function after main function
float add(float num1, float num2)
{
    return num1 + num2;
}