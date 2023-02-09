#include <iostream>
#include <string> //new header file for string class object
using namespace std;
//Topic - class string function
//function are - ( s.append("bye"), s.insert(3,"kk"), s.replace, s.erase)

int main(void)
{#include <iostream>
#include <string> //new header file for string class object
using namespace std;
//Topic - class string function
//function are - ( s.append("bye"), s.insert(3,"kk"), s.replace, s.erase)

int main(void)
{
    system("cls");
    cout<<"Append & String Function | C++ Programming\n";
    cout<<"---------------------------------------\n";
    //s.append means added content at the end of array
    string user = "1. Good Morning Sir...";
    user.append("My name is Chandan");      //added content at the end 
    cout<<user;

    //s.insert use to insert element in given index or a string (note string work as an array)
    string user1 = "\n2. Hello My name is Chandan";
    user1.insert(9," Good morning! ");
    cout<<user1;  

    //s.replace the element or word of string in particular area
    string user2 = "\n3. C++ Progrmg is Here!";
    user2.replace(13,1,"amin");            //it replace wrong element in correct element
    cout<<user2;
    cout<<endl<<endl;
    return 0;
}
    system("cls");
    cout<<"Append & String Function | C++ Programming\n";
    cout<<"---------------------------------------\n";
    //s.append means added content at the end of array
    string user = "1. Good Morning Sir...";
    user.append("My name is Chandan");      //added content at the end 
    cout<<user;

    //s.insert use to insert element in given index or a string (note string work as an array)
    string user1 = "\n2. Hello My name is Chandan";
    user1.insert(9," Good morning! ");
    cout<<user1;  

    //s.replace the element or word of string in particular area
    string user2 = "\n3. C++ Progrmg is Here!";
    user2.replace(13,1,"amin");            //it replace wrong element in correct element
    cout<<user2;
    cout<<endl<<endl;
    return 0;
}