#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nShorting Array (Bubble-short) | C++ \n";
    cout<<"-------------------------------------\n\n";
    int user, choice;
    int i, j;
    int arruser[10];
    cout<<"Enter Number: "; cin>>user;
    cout<<"\nEnter Random Number...\n";
    //scan data from usser
    for(i=0; i<user; i++)
    {
        cout<<"Number "<<(i+1)<<": ";
        cin>>arruser[i];
    }
    do
    {
    system("cls"); 
    cout<<"\nShorting Array (Bubble-short) | C++ \n";
    cout<<"-------------------------------------\n\n";
    cout<<"Your Number are: ";
    for(i=0; i<user; i++)
    {
        cout<<" | "<<arruser[i]<<" | ";
    }
    //bubble short
    cout<<"\n\n1. Accending order"<<endl<<"2. Decending order"<<endl<<"3. Exit";
    cout<<"\n\nEnter your Choice: ";cin>>choice;
    if(choice == 1)
    {
    for(i=0; i<(user-1); i++) //user -1 because we compare 4 element of array only
    {
        for(j=0; j<(user-1); j++)
        {
            if(arruser[j]>arruser[j+1])
            {
            //    arr[0]        arr[0]         arr[1]
                arruser[j] = arruser[j] + arruser[j+1];  //Exchange numbers
                arruser[j+1] = arruser[j] - arruser[j+1];
                arruser[j] = arruser[j] - arruser[j+1];
            }
        }
    }

    cout<<"\n\nOutpur Ready...\n\n";
    cout<<"Accending Order: ";
    for(i=0; i<user; i++)
    {   Sleep(500);
        cout<<" | "<<arruser[i]<<" | ";
    }
    }else if(choice == 2)
    {
    for(i=0; i<(user-1); i++) //user -1 because we compare 4 element of array only
    {
        for(j=0; j<(user-1); j++)
        {
            if(arruser[j]<arruser[j+1])
            {
            //    arr[0]        arr[0]         arr[1]
                arruser[j] = arruser[j] + arruser[j+1];  //Exchange numbers
                arruser[j+1] = arruser[j] - arruser[j+1];
                arruser[j] = arruser[j] - arruser[j+1];
            }
        }
    }
    cout<<"\nOutpur Ready...\n\n";
    cout<<"\nDecending Order: ";
    for(i=0; i<user; i++)
    {   Sleep(500);
        cout<<" | "<<arruser[i]<<" | ";
    }
    }else {cout<<"Thankyou...!";}
    getchar();
    getchar();
    } while (choice!=3);
cout<<endl<<endl;
return 0;
}