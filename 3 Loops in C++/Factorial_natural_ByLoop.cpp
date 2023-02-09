#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int factor = 1,user;
    cout<<"Enter the Value: "; cin>>user;
    cout<<"For - Loop \n";
    cout<<"------------\n";
    for(int i=1; i<=user; i++)
    {
        factor = factor * i;
    }
    cout<<"\nAnswer: "<<factor<<endl;

    cout<<"\n\nwhile - Loop \n";
    cout<<"------------\n";
    int j = 1, factor1=1;
    while(j<=user)
    {
        factor1 = factor1 * j;
        j++;
    }
    cout<<"Answer: "<<factor1;
    
    return 0;
}