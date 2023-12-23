// Take positive integer input and tell if it is divisible by 5 & 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the integer : ";
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "Yes it's divisible";
    }
    else
    {
        cout << "Not  divisible";
    }
}