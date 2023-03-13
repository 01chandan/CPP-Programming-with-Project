#include <iostream>
using namespace std;
//Topic - This Pointer using this keyword
//it remove conflict in same name variable in same class
class rectangle
{
    private:
    int length, breath;
    public:
    rectangle(int length, int breath)
    {
        this->length = length;  //this keyword is used  to identify current object  
        this->breath = breath;  //other wise it return garbage value
    }
    int area() { return length * breath; }

};

int main()
{
    system("cls");
    cout<<"This Keyword | C++ Programming\n";
    cout<<"------------------------------\n";
    rectangle ob1(10,2);
    cout<<"Area: "<<ob1.area();
    cout<<endl<<endl;
    return 0;        
}