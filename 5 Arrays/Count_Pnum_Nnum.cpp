#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"Count Negative & possitive numbers\n";
    cout<<"-----------------------------------\n\n";
    int A[] = {1, 9, 12, -2, 32, 23, 56, -12, 25, -124};
    int pcount = 0, ncount = 0;
    for(int a:A)
    {
        if(pcount<a)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }
    cout<<"Positive number Count: "<<pcount<<endl;
    cout<<"Negative number count: "<<ncount<<endl;
    
return 0;
}