#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nHollow Triangle | Star Pattern\n";
    cout<<"------------------------------------\n\n";
    int row, col, user;
    cout<<"Enter the Number of Rows: "; cin>>user; // 10
    // with Stars (astrics)
    for(row=1; row<=user; row++)
    {
        for(col=1; col<=user; col++)
        {
            if(row + col == (user / 2 - 1) || col - row == 3 || row==4)
            {
                cout<<"*";
                user--;
            }else cout<<" ";
        }cout<<endl;
    }

    // with interger value
    //made hollow triangle pattern input from user?

return 0;
}