#include <iostream>
#include <cstring> 
using namespace std;
//Topic - String Function
//sub string (strstr) help 

int main(void)
{
    system("cls");
    cout<<"Sub String & Compare |String Function\n";
    cout<<"-------------------------------------\n";
//String Function - Sub String
    char A[20] = {"Programming"};
    char B[20] = {"o"};          
//  cout<<"Answer: "<<strstr(A,B)<<endl;          //strstr(main,sub) case sensitive
    
//String Function - strstr with if condition
    if(strstr(A,B) == NULL)
    cout<<"\nEnter valid key";
    else cout<<"\nAnswer: "<<strstr(A,B);
    cout<<endl;

//String Function - strchar (string character) or 
    cout<<"Answer: "<<strchr(A,'g');
    cout<<endl<<endl;
    return 0;
}