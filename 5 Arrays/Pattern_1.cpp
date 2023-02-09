#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Pattern -1 | Counting\n";
    cout<<"-------------------------\n\n";
  int count = 1;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<count<<" ";
        count++;
        }
        cout<<endl;
    }

return 0;
}