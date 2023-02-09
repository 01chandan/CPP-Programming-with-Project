#include <iostream>
#include <string> //new header file for string class object
using namespace std;
//Topic - class string function
//function are - ( s.length(), s.size(), s.capacity(), s.resize(), s.max_size(), s.clear(), s.empty() )

int main(void)
{
    system("cls");
    cout<<"Class String Function | C++ Programming\n";
    cout<<"---------------------------------------\n";
    string user = "Good Morning Sir...";
    cout<<"1. Size of word: "<<user.length()<<endl;             //it is use to measure the length of sting
    cout<<"2. Size of word: "<<user.size()<<endl;              //it is same as s.length function
    
    //s.capacity()
    string user1 = "Morning";
    cout<<"3. Normal Capacity: "<<user1.capacity();              //used to measure capacity of a string

    //s.resize()
    user1.resize(50);                   //use to increase the capacity of a string
    cout<<"\n4. After increase the Capacity:"<<user1.capacity();   
    
    //s.max_size()
    cout<<"\n5. Maximum Capacity of array: "<<user1.max_size();

    //s.clear()                             clear all elements in string
    string user2 = "Basti ka Hasti Bro";
    user2.clear();
    cout<<"\n5. Maximum Capacity user2: "<<user2.length();

    user2.empty();                      
    cout<<"\n5. Maximum Capacity user2: "<<user2.length();
    
    cout<<endl<<endl;
    return 0;
}