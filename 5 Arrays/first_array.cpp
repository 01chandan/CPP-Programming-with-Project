#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    int in[5] = {2, 5, 10, 15, 20};
    char c[ ] = {'A','D','S', 'Z', 'G'};
    float f[ ] = {16.2, 23.5, 54.36, 45.2};
    cout<<"Data-type int arrays | C++ Programming\n";
    cout<<"---------------------------------------\n";
    cout<<"Printing Single Arrays: "<<in[2]<<"  (Single Array)";// Single Value of array only
    
    // All valule printer by using for - loop
    cout<<"\n\n-------------------------------------\n";
    cout<<"|Multiple Arrays by using For - Loop|\n";
    cout<<"-------------------------------------\n";
    cout<<"\n\nint all Array\n";
    cout<<"------------------\n";
    for(int i=0; i<5; i++)
    {
        cout<<in[i]<<"  ";
    }
    cout<<"\n\nchar all Array\n";
    cout<<"------------------\n";
    for(int i=0; i<5;i++)
    {
        cout<<c[i]<<"  ";
    }
    cout<<"\n\nfloat all Array\n";
    cout<<"------------------\n"; 
    for(int i=0; i<5; i++)
    {
        cout<<f[i]<<"  ";
    }
    
    cout<<"\n==================================================\n";

    //All value printer by using while Loop
    cout<<"\n--------------------------------------\n";
    cout<<"|Multiple Arrays by using While - Loop|\n";
    cout<<"---------------------------------------\n";
    cout<<"\n\nint all Array\n";
    cout<<"------------------\n";
    int w = 0;  
    while (w<5)
    {
        cout<<in[w]<<"  ";
        w++;
    }
    cout<<"\n\nchar all Array\n";
    cout<<"------------------\n";
    int w1 = 0;
    while(w1<5)
    {
        cout<<c[w1]<<"  ";
        w1++;
    }
    cout<<"\n\nFloat - all Array\n";
    cout<<"---------------------\n";
    int w2 = 0;
    while(w2<5)
    {
        cout<<f[w2]<<"  ";
        w2++;
    }
    return 0;
}