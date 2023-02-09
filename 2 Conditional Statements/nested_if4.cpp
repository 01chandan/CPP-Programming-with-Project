#include <iostream>
using namespace std;

int main(void)
{
    system("cls");
    float discount, amount;
    cout<<"Discount Bill Amount | C++ Programming\n";
    cout<<"---------------------------------\n\n";
    cout<<"Enter Total Amount: "; cin>>amount;
    if(amount>=5000)
    {
        discount = amount * 20 / 100;
        cout<<"Discount Calculated 20% : "<<discount<<endl;
        cout<<"Total payable amount after Discount : "<<amount - discount;
    }
    else if(amount>=2000)
    {
        discount = amount * 10 / 100;
        cout<<"Discount Calculated 10% : "<<discount<<endl;
        cout<<"Total payable amount after Discount : "<<amount - discount;
    }
    else if(amount<2000)
    {
        discount = amount * 5 / 100;
        cout<<"Discount Calculated 5% : "<<discount<<endl;
        cout<<"Total payable amount after Discount : "<<amount - discount;
    }
    else
    {
        cout<<"Please Enter valid number!";
    }

    return 0;
}