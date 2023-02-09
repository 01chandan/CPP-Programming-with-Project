#include <iostream>
#include <cstring> 
using namespace std;
//Topic - String Function
//String Compare (strcmp) help to compare two string in Alphabetic Order

int main(void)
{
    system("cls");
    cout<<"Sub String & Compare |String Function\n";
    cout<<"-------------------------------------\n";
//String Function - Sub String (try multiple variation) note: 
    char A[20] = {"Programming"};
    char B[20] = {"Programming"};
    cout<<"Comparision 1: "<<strcmp(A,B)<<endl;

   

    cout<<endl<<endl;
    return 0;
}