#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int user, count = 0;
    cout<<"Find Prime number or not\n";
    cout<<"-------------------------\n\n";
    cout<<"Enter the value to know Prime number or not: "; cin>>user;
    // factors are which is total divisible. & remainder is 0
    for(int i=1; i<=user; i++)
    {
        if(user % i == 0)
        {
            cout<<"Factor is: " <<i<<endl;
            count++;
        }
    }
    //prime number is divisible by  1 & its self only. it means primary number
    //have 2 factor always
    if(count==2)
    {
        cout<<user<<" Number is Prime number";
    }
    else
    {
        cout<<user<<" Number is Not Prime number";
    }
    return 0;
}