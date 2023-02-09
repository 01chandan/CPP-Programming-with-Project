#include <iostream>
using namespace std;
//purpose of this Enum &  typedef is to easily readable things that what programmer is declare.
enum Emp_code {emp_101,emp_102,emp_103,emp_104,emp_105};
typedef int marks;
int main()
{
    system("cls");
    int sum;
    //Enum
    cout<<"------------------------\n";
    cout<<"Enum Only \n";
    cout<<"------------------------\n\n";
    Emp_code e = emp_102;

    cout<<"output"<<endl;
    cout<<"Emp Value: "<<e<<endl;
    cout<<"Emp Value: "<<emp_104<<endl<<endl;

    //type defination
    cout<<"------------------------\n";
    cout<<"Typedef Only \n";
    cout<<"------------------------\n\n";
    marks m1 = 10, m2 = 20;
    sum = m1 + m2;

    cout<<"Emp Value: "<<sum<<endl;

    return 0;
}
