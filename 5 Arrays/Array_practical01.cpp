#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    // This practical is onne screen practical
    system("cls"); 
    cout<<"\nArray Practical - 1| Learning C++\n";
    cout<<"-----------------------------------\n\n";
    int arrnum[5];
    int user, choice;
    int min, max, sum, average, exit;
    cout<<"Enter inputs: "; cin>>user;
    cout<<"\nEnter "<<user<<" Numbers...\n";
    for(int i=0; i<user; i++)
    {
        cout<<"["<<(i+1)<<"]: ";
        cin>>arrnum[i];
    }
    do
    {
    system("cls"); 
    cout<<"\nArray Practical - 1| Learning C++\n";
    cout<<"-----------------------------------\n\n"; 
    cout<<"Your "<<user<<" Inputs are...\n";
    for(int i=0; i<user; i++)
    {
        cout<<"["<<(i+1)<<"]: ";
        cout<<arrnum[i];
        cout<<endl;
    }

    cout<<"\nMenu options...\n";
    cout<<"1. Min"<<endl<<"2. Max"<<endl<<"3. Sum"<<endl<<"4. Average"<<endl<<"5. Exit"<<endl;

    cout<<"Enter Your Choice: "; cin>>choice;

    switch (choice)
    {
    case 1:
        min = arrnum[0];
        for(int i=1; i<user; i++)
        {
            if(min>arrnum[i])  min = arrnum[i];
        }
        cout<<"\nAnswer | Min = "<<min;
    break;
    case 2:
        max = arrnum[0];
        for(int i=1; i<user; i++)
        {
            if(max<arrnum[i])  max = arrnum[i];
        }
        cout<<"\nAnswer | Max = "<<max;
    break;
    case 3:
        sum = arrnum[0];
        for(int i=1; i<user; i++)
        {
           sum = sum + arrnum[i];
        }
        cout<<"\nAnswer | Sum = "<<sum;
    break;
    case 4:
        sum = arrnum[0];
        for(int i=1; i<user; i++)
        {
           sum = sum + arrnum[i];
           average = sum / user;
        }
        cout<<"\nAnswer | Average = "<<average;
    break;
    case 5:
        cout<<"\nThankyou...";
    break;
    default: 
    cout<<"\nEnter invalid Choice | Try again...";
    break;
    }
    getchar();
    getchar();
    } while (choice!=user);
cout<<endl<<endl;
return 0;
}