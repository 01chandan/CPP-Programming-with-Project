#include <iostream>
using namespace std;
//Topic - Pointer to an object help to create object by using Pointer

class rectangle
{
    public:
    int l, b;
    int area()
    {
        return l*b;
    }
    int perimeter()
    {
        return 2 * (l+b);
    }
};

int main()
{
    system("cls");
    cout<<"Pointer to an Object in Heap | C++ Programming\n";
    cout<<"---------------------------------------------\n";
    rectangle r1, *r2;
    r1.l = 10;
    r1.b = 5;
    cout<<"R1 Result: "<<r1.area();
    r2 = &r1;   //pointer use in object
    r2->l = 5;  // arrow operator or dereferencing operator
    r2->b = 3;
    cout<<"\n\nR2 Result: "<<r2->area();    //value of r1 variable has  been changed
    cout<<"\n\nR1 Result: "<<r1.area();    //coz. r2 var contain address of r1 var.

    // Create an object in a heap
    cout<<"\n\n\nObject Created in a Heap";
    rectangle *r3 = new rectangle;//new keyword is used to create object in heap section
    r3->l = 10;
    r3->b = 8;
    cout<<"\n\nR3 Result: "<<r3->area();

    cout<<endl<<endl;
    return 0;        
}