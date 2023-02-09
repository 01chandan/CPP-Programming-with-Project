#include <iostream>
#include <cmath>
using namespace std;

//Function overloading means same function but changing their parameter
int sum(int a, int b)
{
  int sum = a + b;
  return sum;
}
int sum(int a, int b, int c)
{
  int sum = a + b + c;
  return sum;
}
float sum(float a, float b)
{
  float sum = a + b;
  return sum;
}

int main(void)
{
    system("cls");
    cout<<"Function Overloading | C++\n";
    cout<<"--------------------------\n";
    int sum1 = sum(10,20);
    cout<<"\nResult | "<<sum1;
    int sum2 = sum(10,60,30);
    cout<<"\nResult | "<<sum2;

    float sum3 = sum(2.5f, 30.2f);
    cout<<"\nResult | "<<sum3;
    cout<<endl<<endl;
    return 0;
}