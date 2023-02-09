#include <iostream>
using namespace std;
int main(void)
{
    system ("cls");
    cout<<"Binary Search\n";
    cout<<"-----------------\n\n";
    int A[10] = {1, 3, 5, 10, 15, 20, 22, 25, 28, 30};
    int low = 0, hig = 10, mid, user,i;
    cout<<"Enter input found in database: "; cin>>user;
    while(low<=hig)
    {
        mid = (low + hig) / 2;
        if(user == A[mid])
        {
            cout<<"\nYour input found Succesfully";
            return 0;
        }
        else if(A[mid]<user)
        {
            low = mid - 1;
        }
        else if(mid>user)
        {
            hig = mid +1;
        }
    }
    cout<<"\nYour input found Unsuccesfull";
}