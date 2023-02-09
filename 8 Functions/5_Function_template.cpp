#include <iostream>
using namespace std;

//Function template means function overload with same parameter but different data type
int max(int a, int b, int c)
{
  if(a>b)
  {
    c = a;
  }                                   //same function & parameter but different data type
  else c = b;
  return c;
}

float max(float a, float b, float c)
{
  if(a>b)
  {
    c = a;
  }else c = b;
}
int main(void)
{
    system("cls");
    cout<<"Function Template | C++\n";
    cout<<"--------------------------\n";
    int max1;
    float max2;
    max1 = max(10,20);
    cout<<"\nResult | "<<max1;
    max2 = max(10.50,20.45);
    cout<<"\nResult | "<<max2;
    cout<<endl<<endl;
    return 0;
}