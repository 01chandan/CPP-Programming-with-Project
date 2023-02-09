#include <iostream>
using namespace std;
// Static Variable      
int sum1()
{
    int num1 = 10;          //Default variable
    num1++; 

    return num1;
}
int sum2()
{
   static int num1 = 10;    //static variable
    num1++; 

    return num1;
}
int main(void)
{
    system("cls");
    cout<<"Static Variable | Parameter passing\n";
    cout<<"-----------------------------------\n";
//First Function Call
    cout<<"Default - Variable\n";
    int display = sum1();          //1st time function call return 11 by increment
    cout<<"Answer: "<<display;     //2nd time function call return 11 by increment
    display = sum1();              //but if we use variable as a static and call function again 
    cout<<"\nAnswer: "<<display;

//Second Function Call
    cout<<"\n\nStatic - Variable\n";
    int display1 = sum2();          //1st time function call return 11 by increment
    cout<<"Answer: "<<display1;     //2nd time function call return 12 by increment using Static keyword
    display1 = sum2();              
    cout<<"\nAnswer: "<<display1;
    cout<<endl<<endl;
    return 0;
}