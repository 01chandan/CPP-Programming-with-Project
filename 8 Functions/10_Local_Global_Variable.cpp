#include <iostream>
using namespace std;
// Local & Global Variable
int num1 = 10;          //global Variable access any where in source code
int sum1(int num2)
{
    int temp = num1 + num2; //local variables (temp & num2)access only their function scope
    return temp;
}
int main(void)
{
    system("cls");
    cout<<"Local & Global Var | Parameter passing\n";
    cout<<"--------------------------------------\n";
    int display = sum1(20);
    cout<<"Answer: "<<display;
    cout<<endl<<endl;
    return 0;
}