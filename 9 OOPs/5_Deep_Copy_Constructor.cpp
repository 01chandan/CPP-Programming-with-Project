#include <iostream>
using namespace std;
//Topic - Deep Copy Constructor

class rectangle
{
    private:
    int a, *b;

    public:
    rectangle(int x)
    {
        a = x;
        b = new int [a];
    }
 /*   rectangle(rectangle &o1)
    {
        a = o1.a;
        b = new int A[3];
    }*/
};

int main()
{
    system("cls");
    cout<<"Deep Copy Constructor | C++ Programming\n";
    cout<<"---------------------------------------\n";

    rectangle ob(5);
    cout<<"\n\nResult: "<<ob.;

    cout<<endl<<endl;
    return 0;        
}