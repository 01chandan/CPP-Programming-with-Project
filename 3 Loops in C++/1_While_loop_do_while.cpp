#include <iostream>
using namespace std;

int main(void)
{
    system("cls");
    int i, j;
    cout<<"Enter Counting starting Number : "; cin>>i;
    cout<<"Enter Counting End Number : "; cin>>j;
    //Ex 1: 1 Means True 0 Means false
    //Infinite Loop (Whwn 1 written 1 it means there is no boundation to exit code. so loop continuesly Working)

/* while(i<j)
    {
        cout<<"Hello"<<endl;
        i++;
    }*/

    //Do-While Loop

   do
    {
        cout<<i<<endl;
        i++;
       
    }while(i<j);


    return 0;
}