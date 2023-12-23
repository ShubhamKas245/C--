// Write a function to compute the greatest common divisor of two given numbers

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a;
    cout << "Enter the value of a  : ";
    cin >> a;
    int b;
    cout << "Enter the value of b  : ";
    cin >> b;
    cout << "Printing Greatest Common Divisor" << endl;
    cout << gcd(a, b);

    return 0;
}