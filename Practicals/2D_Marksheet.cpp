#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\n2D Array Marksheet | C++ Programming\n";
    cout<<"--------------------------------------\n\n";
    int sum = 0, temp = 0;
    int total, per;
    int arrmarks[5][4] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout<<"Semester - 1 | BCA [CSE]\n\n";
    cout<<"Enter Subject Marks | Semester - 4\n\n";
    for(int i=0; i<5; i++)
    {   cout<<"Sub "<<(i+1)<<": ";
        sum = 0;
        for(int j=0; j<3; j++)
        {   
            cin>>arrmarks[i][j];
            sum = sum + arrmarks[i][j];
            temp = sum;
        }
    }
    cout<<"----------------------------------------------\n";
    cout<<"|Subject     Theory     Lab     Viva    Total|\n";
    cout<<"----------------------------------------------\n";
    for(int i=0; i<5; i++)
    {
        cout<<"Sub "<<(i+1)<<": ";
        for(int j=0; j<3; j++)
        {  
            cout<<"        "<<arrmarks[i][j];
        }cout<<"        "<<temp<<endl;
    }
    cout<<"----------------------------------------------\n\n";
    cout<<"Total";
    cout<<"\n\nPercentage";
    cout<<"\n\nHightest Theory";
    cout<<"\nHightest Viva";
    cout<<"\nHightest Lab";
    cout<<"\nBest Overall";
cout<<endl<<endl;
return 0;
}