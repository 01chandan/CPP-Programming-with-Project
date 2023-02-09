#include <iostream>
#include <cstring> //new Liabrary
using namespace std;
//Topic - String Function
//new Library file include string length (strlen), (strcat) or (strncat), (strcpy) or (strncpy)
int main(void)
{
    //String Length used to measure of length of character present in a string
    system("cls");
    cout<<"Length Concatenate & Copy |String Function\n";
    cout<<"------------------------------------------\n";
    char A[30] = {"Chandan Kumar"};
    cout<<"\nName Length is..."<<strlen(A);               // (strlen)
    cout<<endl<<endl;

    //String concatenate
    char B[10] = {"Hello"};
    char C[20] = {"Sir. Good morning"};
    cout<<"Answer is: "<<strcat(B,C)<<endl;              // strcat(destination, source)

    char D[10] = {"Hello"};
    char E[20] = {"Sir. Good morning"};
    cout<<"\nAnswer is: "<<strncat(D,E,6)<<endl;      // strncat(destination, source, length)

    //String copy used to copy one string element into another string
    char F[10] = {"Hello"};
    char G[40] = {"Sir. Good morning"};
    strcpy(F,G);
    cout<<"\nAnswer is: "<<F<<endl;              // strcat(destination, source)

    char H[10] = {"Hello"};
    char I[40] = {"Sir. Good morning"};
    strncpy(H,I,7);
    cout<<"\nAnswer is: "<<H<<endl;              // strcat(destination, source, length)
    cout<<endl<<endl;
    return 0;
}