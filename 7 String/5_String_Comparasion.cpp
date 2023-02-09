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
//String Function - String Comparision (try multiple variation) note: use ASCII Codes
    char A[20] = {"Programming"};
    char B[20] = {"Programming"};
    cout<<"Comparision 1: "<<strcmp(A,B)<<endl;

    char C[20] = {"Programming"};
    char D[20] = {"programming"};
    cout<<"Comparision 2: "<<strcmp(C,D)<<endl;
// Use Difference names
    char E[20] = {"HellO"};
    char F[20] = {"Hello"};
    cout<<"Comparision 3: "<<strcmp(E,F)<<endl;
    cout<<endl<<endl;
    return 0;
}