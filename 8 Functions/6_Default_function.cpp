#include <iostream>
using namespace std;
// default argument helps to combine 2 or 3 function in one function by define one variable is 0 by default
//find maximum.
int max(int a, int b, int c = 0) //c is by default zero thats called default argument
{
    return a>b && a>c ? a:b>c?b:c;
}
int main(void)
{
    system("cls");
    cout<<"Default Arguments | C++\n";
    cout<<"-----------------------\n";
    cout<<"Answer is: "<<max(10,15); // passing 2 parameter
    cout<<"\nAnswer is: "<<max(10,15,12); // passing 3 parameter
    cout<<endl<<endl;
    return 0;
}