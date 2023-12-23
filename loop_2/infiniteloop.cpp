#include <iostream>
using namespace std;

int main()
{
    int i;
    // while (i = 10)
    // {   // conditiom is true in while loop so loop is continue to infinite time
    //     cout << i << " ";
    // }
   
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
        {
            continue;
        }
        else
        {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}