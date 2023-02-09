#include <iostream>
using namespace std;

//function of Finding Maximum Number
int max(int num1, int num2, int num3) // return type int is compulsoary 
{   int max; 
    if((num1 > num2) && (num1>num3))
    {
        max = num1;
    }
    else if(num2>num3)
    {
        max = num2;
    }else max = num3;
    return max;
}

int main(void)
{
    system("cls"); 
    cout<<"\nFunction Find Maximum | C++ Programming\n";
    cout<<"-----------------------=-----------------\n\n";
    cout<<"Maximum number is: "<<max(50,10,30);
return 0;
}