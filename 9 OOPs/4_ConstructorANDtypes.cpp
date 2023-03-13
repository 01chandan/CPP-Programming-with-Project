#include <iostream>
using namespace std;
//Topic - Constructor Introduction & Constructor Types
//1. Non - Parameterised Constructor (Default Con) 2. Parameterised Constructor 3. Copy Constructor

class rectangle
{
    private:
    int length, breath;

    //These also called constructor overloading
    public:
    rectangle(int l = 0, int b = 0) //parameterised constructor 
    {
        length = l;
        breath = b;
    }

    rectangle(rectangle &r1)    //initialization of copy constructor
    {
        length = r1.length;
        breath = r1.breath;
    }
    
    int area()
    {
        return length * breath;
    }
};

int main()
{
    system("cls");
    cout<<"Constructors Introduction | C++ Programming\n";
    cout<<"-------------------------------------------\n";
    rectangle r1(10,2);
    cout<<"\n\nResult: "<<r1.area();

    rectangle r2(r1);   //copy constructor object created
    cout<<"\n\nCopy Constructor: "<<r2.area();
    cout<<endl<<endl;
    return 0;        
}