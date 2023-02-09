#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Adding Elements of array\n";
    cout<<"-------------------------\n\n";
    int A[ ] = {1, 9, 12, 23, 32};
    int sum = 0;
    for(auto a : A)
    {
        cout<<a<<endl;
        sum = sum + a;
    }cout<<"Sum of Array: "<<sum;
    return 0;
}