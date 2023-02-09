#include <iostream>
using namespace std;
int main(void)
{
    system("cls");
    cout<<"\nAverage of Array | 2D Array\n";
    cout<<"-----------------------------------------\n\n";
    int user, A[100];
    float sum=0.0, avg; 
    cout<<"Enter time of rotation: "; cin>>user;
    for(int i=0; i<user; i++)
    {
        cout<<"\nEnter Number " <<i<<": ";
        cin>>A[i];
        sum = sum + A[i];
        avg = sum / user;
    }
    cout<<"\nsum is: "<<sum;
    cout<<"\nAverage is: "<<avg;
    cout<<endl<<endl;
    return 0;
}