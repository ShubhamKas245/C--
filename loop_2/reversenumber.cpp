// WAP to print reverse of a given numbers

#include <iostream>
using namespace std;

int main()
{
    int n, r = 0;
    cout << "Enter the Numbers : ";
    cin >> n;
    while (n > 0)
    {
        r *= 10;
        int lastDigit = n % 10;
        r += lastDigit;
        n /= 10;
    }
    cout<<"Reverse No = " << r << endl;
}
