#include <iostream>
using namespace std;
int main(void)
{
    //find location  of element (i.e) Searching
    // searching element usually call as key
    system("cls");
    cout<<"Linear Search\n";
    cout<<"---------------------------------\n\n";
    cout<<"Searching in array\n";
    cout<<"---------------------------------\n\n";
    int A[7], user = 7;
        int key;
    cout<<"Enter the number: ";
    //scan all array from the user
    for(int i=0; i<user; i++)
    {
        cin>>A[i]; 
    }

    cout<<"enter key: "; cin>>key;
    for(int i=0; i<user; i++)
    {
        if(key==A[i])
        {
            cout<<"Your address of key is "<<i;
            return 0;//return 0 is here because when we find address of key stop it imidetly
        }
    }cout<<"Your key is not Present in Array";// this statement is here because our 

}