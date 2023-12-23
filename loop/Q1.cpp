// Display this AP-100,97,94....upto all terms which are positive

#include <iostream>
using namespace std;

int main()
{
    cout << "Total positive numbers : ";

    int a = 100;
    while (a > 0)
    {
        cout << a << " ";
        a -= 3;
    }
    return 0;
}
