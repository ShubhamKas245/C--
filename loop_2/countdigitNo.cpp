// WAP to count digits of a given numbers.

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the Number : ";
    cin >> n;
    int a = n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    if (a == 0)
        cout << "No of digits = 1" << endl;
    else
        cout << "No of digit = " << count << endl;
    return 0;
}