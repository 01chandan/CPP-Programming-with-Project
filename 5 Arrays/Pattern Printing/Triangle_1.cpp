#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Pattern - 2 | Triangle\n";
    cout<<"-------------------------\n\n";
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
          if(i>=j)
          {
            cout<<" * ";
          }
        }
        cout<<endl;
    }

return 0;
}