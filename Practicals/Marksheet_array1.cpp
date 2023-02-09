#include <iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nMarksheet | C++ programming\n";
    cout<<"-----------------------------\n\n";
    int sub, total,devesion, option;
    int stdsub[10];
    float percentage;
    cout<<"Enter Your Number of Subjects: "; cin>>sub;
    cout<<"\nEnter Your "<<sub<<" Marks\n\n";
    for(int i=0; i<sub; i++)
    {
        cout<<"Marks | ["<<(i+1)<<"]= ";
        cin>>stdsub[i];
    }
    do
    { 
    system("cls"); 
    cout<<"\nMarksheet | C++ programming\n";
    cout<<"-----------------------------\n\n";
    cout<<"Your "<<sub<<" Subjects Marks...\n\n";
    for(int i=0; i<sub; i++)
    {
        Sleep(60);
        cout<<"Marks  ["<<(i+1)<<"]  =  ";
        cout<<stdsub[i]<<" out of 100";
        cout<<endl;
    }
    cout<<"\n\nChoose Option Below...";
    Sleep(60);
    cout<<"\n\n1. Total Marks"<<endl<<"2. Percentage"<<endl<<"3. Division"<<endl;
    cout<<"4. Exit"<<endl<<endl;
    cout<<"\nSelect option: "; cin>>option;
    switch (option)
    {
    case 1:
        total = stdsub[0];
        for(int i=1; i<sub; i++)
        {
            total = total + stdsub[i];
        }
        Sleep(60);
        cout<<"Answer | Total marks: "<<total;
    break;
    case 2:
        total = stdsub[0];
        for(int i=1; i<sub; i++)
        {
            total = total + stdsub[i];
        }
        percentage = total / sub;
        Sleep(60);
        cout<<"Answer | Percentage: "<<percentage<<"%";
    break;
    case 3:
        devesion = stdsub[0];
        for(int i=1; i<sub; i++)
        {
            devesion = devesion + stdsub[i];
        }
        devesion = devesion / sub;
        if(percentage>=60)
        {
            Sleep(200);
            cout<<"\nResult | "<<percentage<<"%"<<" Very Good first Devision...";
            break;
        }else if(percentage>=40)
        {
            Sleep(200);
            cout<<"\nResult | "<<percentage<<"%"<<" Good Second Devision...";
            break;
        }else if(percentage>=33)
        {
            Sleep(200);
            cout<<"\nResult | "<<percentage<<"%"<<" Third Devision...";
            break;
        }
        else Sleep(200);
        cout<<"\nResult | "<<percentage<<"%"<<" You are fail...";
            break;
    case 4:
        Sleep(60);
        cout<<"\nThankyou Good luck...!";
    break;
    default:
        Sleep(60);
        cout<<"\nInvalid... Try Again.";
        break;
    }
    getchar();
    getchar();
    } while(option!=4);

cout<<endl<<endl<<endl<<endl;
return 0;
}