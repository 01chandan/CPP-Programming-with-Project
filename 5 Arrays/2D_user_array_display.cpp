#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\n2D array Display Elements | C++ \n";
    cout<<"-----------------------------------\n\n";
    int rows, cols;
    int arrnum[10][10];
    cout<<"Enter the array Value: \n";
    cout<<"Rows: ";cin>>rows;
    cout<<"Cols: ";cin>>cols;
    cout<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<"Number ["<<i<<"]"<<" ["<<j<<"]: ";
            cin>>arrnum[i][j];
        }cout<<endl;
    }
    cout<<"\n\nOutput are: \n\n";
    for(int i=0; i<rows; i++)
    {
        cout<<"Row "<<(i+1)<<":  |";
        for(int j=0; j<cols; j++)
        {
            cout<<arrnum[i][j]<<" | ";
        }cout<<endl;
    }

    
cout<<endl<<endl;
return 0;
}