#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Nested Loop\n";
    cout<<"-------------\n\n";

    for(int i=1; i<=3; i++) // this decide how many rows
    {
        for(int j=0; j<=3; j++) // this decide how many columns
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

return 0;
}