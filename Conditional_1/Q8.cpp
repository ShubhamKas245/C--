// Take postive integer input and tell if it is divisible by 5 or 3 but not divisible by 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the integer : ";
    cin >> n;

    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        cout << "Yes it's divisible  but not 15";
    }
    else
    {
        cout << "Not matching conditions";
    }
}