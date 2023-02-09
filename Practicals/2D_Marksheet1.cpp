#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\n2D Array Marksheet | C++ Programming\n";
    cout<<"--------------------------------------\n\n";
    int sum = 0, temp = 0;
    int total = 0, per;
    int theory, viva, lab, best;
    int arrmarks[5][3]={47,7,5,53,6,10,69,98,7,48,9,8,55,5,6};
  //  cout<<"Semester - 1 | BCA [CSE]\n\n";
 //   cout<<"Enter Subject Marks | Semester - 4";
  //  for(int i=0; i<5; i++)
  //  {   cout<<"\n\nSubject "<<(i+1)<<": \n";
      //  temp = 0;
       // for(int j=0; j<1; j++)
       // {   
     //       cout<<"Theory 80 marks: "; cin>>arrmarks[i][0];
      //      temp = temp + arrmarks[i][0];
      //      cout<<"Viva 10 marks: "; cin>>arrmarks[i][1];
      //      temp = temp + arrmarks[i][1];
       //     cout<<"Lab 10 marks : "; cin>>arrmarks[i][2];
           // temp = temp + arrmarks[i][2];
          //  arrmarks[i][3] = temp;
      //  } 
     // total =  total + arrmarks[i][3];
       // per = total / 5;
 //  }
    for(int i=0; i<4; i++)
    {
        if(arrmarks[i][0]>arrmarks[(i+1)][0])
        {
            theory = arrmarks[i][0];
            viva = arrmarks[i][1];
            lab = arrmarks[i][2];
            best = arrmarks[i][3];
        }
    }
    system("cls");      
    cout<<"\n2D Array Marksheet | C++ Programming\n";
    cout<<"--------------------------------------\n\n";
    cout<<"Semester - 6 | BCA [CSE]\n\n";
    cout<<"---------------------------------------------\n";
    cout<<"|Subject     Theory    Lab     Viva    Total|\n";
    cout<<"---------------------------------------------\n";
    for(int i=0; i<5; i++)
    {
        cout<<"Sub - "<<(i+1)<<": ";
        for(int j=0; j<3; j++)
        {  
            cout<<"      "<<setw(2)<<arrmarks[i][j];
        }
    cout<<"        "<<arrmarks[i][3]<<endl;
    }
    cout<<"---------------------------------------------\n\n";
    cout<<"Total"<<"                                      "<<total;
    cout<<"\n\nPercentage                               "<<per<<"%";
    cout<<"\n\nHightest Theory                            "<<theory;
    cout<<"\nHightest Viva                              "<<viva;
    cout<<"\nHightest Lab                                "<<lab;
    cout<<"\nBest Overall                               "<<best;
cout<<endl<<endl;
return 0;
}