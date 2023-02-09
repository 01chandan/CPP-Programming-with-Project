#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int user, sum=0;
    cout<<"Enter the Number: "; cin>>user;
    //first find Factor
    for(int i=1; i<=user; i++)
    {
        if(user % i == 0)
        {
            cout<<i<<endl;
            //Then sum of factor stored in sum
            sum = sum + i;
        }

    }
    //print sum of factor
    cout<<"Sum is :"<<sum<<endl;
    //A perfect no is which sum is equal is user number multiply by 2
    if(user * 2 == sum)
    {
        cout<<"It is Perfect Number: "<<sum;
    }
    else
    {
        cout<<"It is not Perfect Number";
    }
    return 0;
}