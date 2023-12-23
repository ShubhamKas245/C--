// Given an integer.Print the absolute value of that integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Integer : ";
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else
    {
        cout << -n;
    }

    return 0;
}