#include <iostream>
using namespace std;
// All Types of Declaration of a String
//String is nothing but just a combination of Character Values.

int main(void)
{
    system("cls");
    cout<<"String Introduction | C++ Programing\n";
    cout<<"------------------------------------\n";
//declaration must be in double (" ")otherwise it treated as a character value not a string
    char A[20] = {"1. Hello String"}; 
    cout<<A<<endl;
//String declare 
    char B[] = {"2. Hello String Wale"};
    cout<<B<<endl;
//\0 (String Delimiter) means null value it determine terminating the string.
    char C[] = {'3','.',' ','S','t','r','i','n','g','|','C','h','a','r','\0'};
    cout<<C<<endl;
//String Declaration using ASCII.
    char D[] = {52,46,32,65,66,67,68,69,'\0'};
    cout<<D<<endl;
    cout<<endl<<endl;
    return 0;
}