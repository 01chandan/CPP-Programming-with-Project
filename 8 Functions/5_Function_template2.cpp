#include <iostream>
using namespace std;

//Function template means function overload with same parameter but different data type
int max(int a, int b)
{   
    return a>b?a:b; //we spell like this if else condition
    //a is greater than b (a>b) then (?) print a other wise print b (a:b) 
    //[?] = ternary operator
}
int main(void)
{
    system("cls");
    cout<<"Function Template | C++\n";
    cout<<"--------------------------\n";
    int max1;
    float max2;
    max1 = max(10,20);
    cout<<"\nResult | "<<max1;
    cout<<endl<<endl;
    return 0;
}