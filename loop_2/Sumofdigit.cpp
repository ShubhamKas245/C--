// WAP to print sum of digits of a given numbers

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the Numbers : ";
    cin >> n;
    int a = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n/=10;
    }
    if (a == 0)
        cout << "sum of digits = 0" << endl;
    else
        cout << "Sum of digit = " << sum << endl;
    return 0;
}