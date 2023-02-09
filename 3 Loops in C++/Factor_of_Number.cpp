#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int user,sum=0;
    cout<<"Factor of N Number\n";
    cout<<"--------------------\n\n";
    cout<<"Enter Your number to find Factors: "; cin>>user;
    //factor means n number is divisible perfectly and remainder is 0
    for(int i=1; i<=user; i++)
    {
        if(user % i == 0)
        {
            cout<<"factor is: "<<i<<endl;
            sum = sum + i;
        }
    }cout<<"The sum of all Factors is: "<<sum;
    
    return 0;
}