#include <iostream>
using namespace std;
int main(void)
{
   system("cls");
    int A[ ] = {1, 2, 3, 4 ,9 , 10 , 11};
    /*for each used for collection of elements
    for each loop cant modify. it is only type of container which store value of array specially
    for each loop works with array
     */
    for(auto x:A) //for each x in A (x is nothing only variable)
    {
        cout<<x<<endl;
    }
    return 0;
}