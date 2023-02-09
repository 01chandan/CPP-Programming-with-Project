#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int n1;
    cout<<"Switch-Case Statement\n";
    cout<<"-------------------------\n";
    cout<<"Enter the number to find day: "; cin>>n1;
    cout<<endl;
    switch (n1)
    {
        case 1: cout<<"Your Day is monday";
        break;
        case 2: cout<<"Your Day is tuesday";
        break;
        case 3: cout<<"Your Day is wednesday";
        break;
        case 4: cout<<"Your Day is Thrusday";
        break;
        case 5: cout<<"Your Day is friday";
        break;
        case 6: cout<<"Your Day is saturday";
        break;
        case 7: cout<<"Your Day is sunday";
        break;
        default : cout<<"Please Enter Valid number";
    }
    return 0;
}