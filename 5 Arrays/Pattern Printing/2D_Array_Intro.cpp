#include <iostream>

using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nAccess all elements of Array | 2D Array\n";
    cout<<"-----------------------------------------\n\n";
    // 2D Array are mostly use for Matrix 
    int i,j;
    int A[3][5] = {1,2,3,4,5,6,7,8,9,5,9,4,1,0,6};
    //you can write also {{1,2,3,4,5},{6,7,8,9,5},{9,12,13,14,15}};
    cout<<"Matrix are: \n\n";
    for(i=0; i<3; i++)
    {cout<<"|";
        for(j=0; j<5; j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<"|";cout<<endl;
    }
    cout<<endl<<endl;
return 0;
}