#include <iostream>
using namespace std;
int main(void)
{
    //Table by using for | While |do While Loops
    system("cls");
    int user, range;
    cout<<"-------------------------------------\n";
    cout<<"Multiplication using multiple loops\n";
    cout<<"-------------------------------------\n\n";
    cout<<"Enter the Number : "; cin>>user;
    cout<<"Enter the End range: "; cin>>range;
    cout<<"\n\nFor - loop\n";
    cout<<"----------------\n\n";
    for(int i = 1; i<=range; i++)
    {
        cout<<user<<" x "<<i<< " = "<<user * i <<endl;
    }
    cout<<endl;
    cout<<"while - loop\n";
    cout<<"----------------\n\n";
    int i = 1;
    while(i<=range)
    {
        cout<<user<<" x "<<i<< " = "<<user * i <<endl;
        i++;
    }
    cout<<endl;
    cout<<"Do-while - Loop\n";
    cout<<"---------------------\n";
    int j = 1;
    do
    {   
        cout<<user<<" x "<<j<<" = "<<user * j<<endl;
        j++;
    }while(j<=range);
    return 0;
}