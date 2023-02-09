#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int sum = 0,user;
    cout<<"Enter the Value: "; cin>>user;
    cout<<"For - Loop \n";
    cout<<"------------\n";
    for(int i=1; i<=user; i++)
    {
        sum = sum + i;
    }
    cout<<"\nAnswer: "<<sum<<endl;

    cout<<"\n\nwhile - Loop \n";
    cout<<"------------\n";
    int j = 1, sum1=0;
    while(j<=user)
    {
        sum1 = sum1 + j;
        j++;
    }
    cout<<"Answer: "<<sum1;
    
    return 0;
}