#include <iostream>
#include <windows.h>// needed for Sleep() & Beep() functions

using namespace std;
int main(void)
{
    system("cls"); 
    cout<<"\nFor Loops | Sleep & Beep\n";
    cout<<"-----------------------------\n\n";
    for(int i=0; i<10; i++)
    {
        Sleep(0.003); // delay of (sound) in milliseconds
        Beep(523, 500); // frequency of (sound)in Hz, duration of (sound) in milliseconds
        cout<<i;
        cout<<endl;
    }
return 0;
}

/*Note:- 
This header file (#include <bits/stdc++.h>) some most common header files are:-
1. <iostream>   2. <cstdio>     3. <cstring>    4. <cmath>  5. <cstdlib>    6. <algorithm>  
7. <vector> 8. <queue>  9. <stack>  10. <set>   11. <map>   12. <string>    13. <utility>

But we not use this because this header file incerase the compilation time & binary size.*/
