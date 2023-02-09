#include <iostream>
#include <string> //new header file for string class object
using namespace std;
//Topic - class string function
//function are - ( s.push_back('g'), s.pop_back()) && Swap Function in String Class
//Push PoP are worked on one character at a time only that why we use single quote Ex-'G'.

int main(void)
{
    system("cls");
    cout<<"Append & String Function | C++ Programming\n";
    cout<<"---------------------------------------\n";
    //s.push_back() means add some element back side like push & pop concept
    string user = "1. Programming";
    user.push_back('H');      //added content at the end  (push at the time only one character)
    cout<<user;

    //s.push_back() means add some element back side like push & pop concept
    string user1 = "\n2. Programming";
    user1.pop_back();      //subtract one character at the end (pop at the time only one character)
    cout<<user1;        //in pop back not have to declare that character what to remove it automatically deleted at last one
    cout<<endl<<endl;

    //Important Swap Function
    string str1 = "Chandan";
    string str2 = "Kumar";
    cout<<"\nBefore: ";
    cout<<str1<<" | "<<str2;        //swap value by using string class
    str1.swap(str2);
    cout<<"\n\nAfter: ";
    cout<<str1<<" | "<<str2;
    cout<<endl<<endl;
    return 0;
}