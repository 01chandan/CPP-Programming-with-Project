#include <iostream>
#include <string> //new header file for string class object
using namespace std;
//Topic - String Class 

int main(void)
{
    system("cls");
    cout<<"Introduction String Class |C++ Programming\n";
    cout<<"------------------------------------------\n";
    string user;
    cout<<"Enter the Number: ";
    getline(cin,user);              //get line help to take input with space from user
    cout<<user;
    cout<<endl<<endl;
    return 0;
}