#include <iostream>
using namespace std;
//Topic - Data Hiding is used to hide data members and give functions to user for using it
// Achieve data hiding  (Encapsulation)
class rectangle
{
    private:
    int length, breath; //data member are private we cannot access them directly
    // so we access data member by using another #public member function
    public:
    int getlength(int l)
    {
        if(l>=0)
        {
            length = l;
        }else length = 0; cout<<"\nEnter Positive Numbers";
    }
    int getbreath(int b)
    {
        if(b>=0)
        {
            breath = b;
        }else breath = 0;
    }
    int area()
    {
        return length * breath;
    }
};
int main()
{
    system("cls");
    cout<<"Data Hiding Encapsulation | C++ Programming\n";
    cout<<"-------------------------------------------\n";

    rectangle r;
    r.getlength(10); //parameter pass in public member function
    r.getbreath(2);
    cout<<"\nResult: "<<r.area();
    cout<<endl<<endl;
    return 0;        
}
/*
    Property function
    -----------------
    Accessor - get xxx  //Reading the Value
    Mutator - set xxx   //write the value

    note:- when we use both function then we say read writeable
*/
