#include <iostream>
using namespace std;
//Topic - All Type of function in class

class allfunction
{
    private: int  length,breath;

    public:
    allfunction(int a=0, int b=0) //used to set length and breath using constructor
    {
        length = a;
        breath = b;
    }
    allfunction(allfunction &ob1);  //copy constructor
    void setlength();   //used to set Length
    void setbreath();   //used to set breath
    int getlength();    //used to get Length 
    int getbreath();    //used to get Breath
    int area();
    int perimeter();
    int issquare();
};
// all function  here

int allfunction::area() { return length * breath; }
int allfunction::perimeter() { return 2 * (length +  breath); }
int allfunction::issquare() { return length == breath; }

int main()
{
    system("cls");
    cout<<"Scope Resolution Operator | C++ Programming\n";
    cout<<"-------------------------------------------\n";

    allfunction ob1(10,2);
    cout<<"Area of rectangle: "<<ob1.area();
    cout<<"\nPerimeter of rectangle: "<<ob1.perimeter();
    if(ob1.issquare()) { cout<<"\nThis is Square";}else {"\nThis is Rectangle";}

    cout<<endl<<endl;
    return 0;        
}