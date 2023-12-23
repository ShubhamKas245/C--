// Take 3 integer & Find greatest of them

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is largest";
    }
    if (b > a && b > c)
    {
        cout << b << " is largest";
    }
    if (c > a && c > b)
    {
        cout << b << " is largest";
    }
}