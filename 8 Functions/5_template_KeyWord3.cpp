#include <iostream>
using namespace std;

//Function template means function overload with same parameter but different data type
// we use template key word in our code it is also known as Generic Programming

template <class T> // This T will be changed to the data type of the argument during instantiation.  
T maxx(T a, T b)        //single template working all type of data type in once
{                       //template automatic catch data-type of functions & variables
    return a>b?a:b;
}
int main(void)
{
    system("cls");
    cout<<"Function Template | C++\n";
    cout<<"--------------------------\n";
    int max1;
    float max2;
    max1 = maxx(10,20);
    cout<<"\nResult | "<<max1;   
    max2 = maxx(10.50,20.45);
    cout<<"\nResult | "<<max2;

    cout<<endl<<endl;
    return 0;
}