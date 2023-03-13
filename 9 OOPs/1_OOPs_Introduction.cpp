#include <iostream>
using namespace std;
//Topic - Object oriented Programming

class rectangle
{
    public:
    int length, breath;
    
    int area()
    {
        return length*breath;
    } 
    int perimeter()
    {
        return 2*(length+breath);
    }
};  //semicolon is compulsory otherwise it give us an error

int main()
{
    system("cls");
    cout<<"OOPs Introduction | C++ Programming\n";
    cout<<"-----------------------------------\n";

    rectangle r1,r2;          //object created only class name
    r1.length = 40;
    r1.breath = 10;
    cout<<"\nArea of r1: "<<r1.area();
    cout<<"\nPerimeter of r1: "<<r1.perimeter();

    // 2nd object r2 value passed
    r2.length = 10;
    r2.breath = 5;
    cout<<"\n\nArea of r2: "<<r2.area();
    cout<<"\nPerimeter of r2: "<<r2.perimeter();
    cout<<endl<<endl;
    return 0;        
}