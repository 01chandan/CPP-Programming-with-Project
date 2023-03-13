#include <iostream>
using namespace std;
//Topic - Scope Resolution Operator
//we declare all function in class but write the code of function in outer side of class
class rectangle
{
    private:
    int length, breath;
    public:
    rectangle(int a, int b)
    {length = a; breath = b;}
    int area()
    {
        return length * breath;
    }
    int perimeter();
};
   int rectangle::perimeter()  //scope resolution operator
    {
        return 2 * (length + breath);
    }
int main()
{
    system("cls");
    cout<<"Scope Resolution Operator | C++ Programming\n";
    cout<<"-------------------------------------------\n";

    rectangle r1(10,2);
    cout<<"Area: "<<r1.area();
    cout<<"\nperimeter: "<<r1.perimeter();


    cout<<endl<<endl;
    return 0;        
}