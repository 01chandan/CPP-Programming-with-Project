#include <iostream>
#include <cmath>
using namespace std;

//function of calculating power function
int power(int num1, int num2)
{
    int power = pow(num1,num2);
    return power;
}

int main(void)
{
    system("cls"); 
    cout<<"\nFunction Calculate power of n number | C++ \n";
    cout<<"--------------------------------------------\n\n";
    cout<<"Power is: "<<power(10,2);
return 0;
}